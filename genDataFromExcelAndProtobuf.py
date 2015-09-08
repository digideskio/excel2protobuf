# -*- coding: utf-8 -*-
__author__ = 'wanggnim'

import xlrd
import sys
import os
import imp

excelDirName = ""

if len(sys.argv) > 1:
    excelDirName = sys.argv[1] + "/"
if len(sys.argv) > 2:
    pythonDirName = sys.argv[2] + "/"
    sys.path.append(pythonDirName)

def loadObj(fileShortName, className):

    moduleName = pythonDirName + "/" + fileShortName + "_pb2.py"
    # print("moduleName : " + moduleName + "  fileShortName: " + fileShortName + "  className:" + className)

    module = imp.load_source(fileShortName, moduleName)
    claszz = getattr(module, className)
    obj = claszz()
    return obj

configObj = loadObj("config", "ExcelConfig")

for root, dirs, files in os.walk(excelDirName):

    for file in files:
        data = xlrd.open_workbook(excelDirName + file)
        table = data.sheets()[0]

        fileShortName = file.split('.')[0]

        obj = loadObj(fileShortName, fileShortName)
        t1 = getattr(configObj, fileShortName + "s")
        add = t1.add()

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
                        setattr(add, title, (int)(cellValue))
                    elif type == "string":
                        setattr(add, title, (str)(cellValue))

                count += 1


            # setattr(t2, fileShortName + "s.add()", obj)
with open("./src/main/resources/data.pb", 'w+') as dataFile:
    dataFile.write(bytes(configObj))
    print(bytes(configObj))