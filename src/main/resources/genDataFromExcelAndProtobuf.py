# -*- coding: utf-8 -*-
__author__ = 'wanggnim'

import xlrd
import sys
import os
import imp

excelDirName = ""

if len(sys.argv) > 1:
    excelDirName = sys.argv[1]

def loadObj(fileShortName):

    moduleName = "../python/" + fileShortName + "_pb2.py"
    print(moduleName)

    module = imp.load_source(fileShortName, moduleName)
    claszz = getattr(module, fileShortName)
    obj = claszz()
    return obj

configModule = loadObj("config")

for root, dirs, files in os.walk(excelDirName):

    for file in files:
        data = xlrd.open_workbook(excelDirName + file)
        table = data.sheets()[0]

        fileShortName = file.split('.')[0]

        obj = loadObj(fileShortName)

        for index in range(3, table.nrows):
            row = table.row_values(index)

            titles = table.row_values(0)
            types = table.row_values(1)
            count = 0
            for title in titles:
                if "" == title:
                    continue

                cellValue = row[count]
                if cellValue == "":
                    break

                type = types[count]
                if hasattr(obj, title):
                    if type == "uint32":
                        setattr(obj, title, (int)(cellValue))
                    elif type == "string":
                        setattr(obj, title, (str)(cellValue))

                count += 1
