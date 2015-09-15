# -*- coding: utf-8 -*-
__author__ = 'wanggnim'

import xlrd
import sys
import os
import imp

excelDirName = ""

if len(sys.argv) > 1:
    excelDirName = sys.argv[1] + "\\"
if len(sys.argv) > 2:
    pythonDirName = sys.argv[2] + "\\"
    sys.path.append(pythonDirName)

def loadObj(pythonFileName, className):
    moduleName = pythonDirName + "/" + pythonFileName + "_pb2.py"
    # print("moduleName : " + moduleName + "  pythonFileName: " + pythonFileName + "  className:" + className)

    module = imp.load_source(pythonFileName, moduleName)
    claszz = getattr(module, className)
    return claszz()

configObj = loadObj("config", "ExcelConfig")

def checkExcelFile(fileName):
    array = fileName.split(".")
    if len(array) < 2:
        return 0

    if array[1] == "xls":
        return 1

    return 0

for root, dirs, files in os.walk(excelDirName):

    for excelFile in files:
        if checkExcelFile(excelFile) == 0:
            continue

        excel = xlrd.open_workbook(excelDirName + excelFile)

        for sheet in excel.sheets():
            sheetName = sheet.name.encode("utf-8")
            pythonFileName = excelFile.split('.')[0]

            obj = loadObj(pythonFileName, sheetName)
            t1 = getattr(configObj, sheetName + "s")

            print(sheet.nrows)
            for index in range(2, sheet.nrows):
                add = t1.add()
                dataRow = sheet.row_values(index)

                titles = sheet.row_values(0)
                types = sheet.row_values(1)
                cellCount = 0
                for title in titles:
                    if "" == title:
                        continue

                    cellValue = dataRow[cellCount]
                    if cellValue == "":
                        break

                    type = types[cellCount]
                    cellCount += 1
                    if hasattr(obj, title):
                        if type == "uint32":
                            setattr(add, title, (int)(cellValue))
                        elif type == "string":
                            setattr(add, title, (str)(cellValue))
                        elif type == "array,int":
                            print()
                        elif type == "array,string":
                            print()

with open("./src/main/resources/data.pb", 'wb') as dataFile:
    dataFile.write(configObj.SerializeToString())

with open("./src/main/resources/data.txt", 'w+') as dataFile:
    dataFile.write(bytes(configObj))