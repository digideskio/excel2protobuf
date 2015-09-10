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

def loadObj(pythonFileName, className):
    moduleName = pythonDirName + "/" + pythonFileName + "_pb2.py"
    # print("moduleName : " + moduleName + "  pythonFileName: " + pythonFileName + "  className:" + className)

    module = imp.load_source(pythonFileName, moduleName)
    claszz = getattr(module, className)
    return claszz()

configObj = loadObj("config", "ExcelConfig")

for root, dirs, files in os.walk(excelDirName):

    for excelFile in files:
        excel = xlrd.open_workbook(excelDirName + excelFile)

        for sheet in excel.sheets():
            sheetName = sheet.name.encode("utf-8")
            pythonFileName = excelFile.split('.')[0]

            obj = loadObj(pythonFileName, sheetName)
            t1 = getattr(configObj, sheetName + "s")

            for index in range(3, sheet.nrows):
                add = t1.add()
                row = sheet.row_values(index)

                titles = sheet.row_values(0)
                types = sheet.row_values(1)
                count = 0
                for title in titles:
                    if "" == title:
                        continue

                    cellValue = row[count]
                    if cellValue == "":
                        break

                    type = types[count]
                    count += 1
                    if hasattr(obj, title):
                        if type == "uint32":
                            setattr(add, title, (int)(cellValue))
                        elif type == "string":
                            setattr(add, title, (str)(cellValue))

with open("./src/main/resources/data.pb", 'w+') as dataFile:
    dataFile.write(configObj.SerializeToString())

with open("./src/main/resources/data.txt", 'w+') as dataFile:
    dataFile.write(bytes(configObj))