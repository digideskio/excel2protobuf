# -*- coding: utf-8 -*-
__author__ = 'wanggnim'

import xlrd
import sys
import os

if len(sys.argv) > 1:
    excelDirName = sys.argv[1] + "\\"
if len(sys.argv) > 2:
    protobufDirName = sys.argv[2] + "\\"
if len(sys.argv) > 3:
    packageName = sys.argv[3]

protoFileNames = []
protoMessageNames = []

def checkExcelFile(fileName):
    array = fileName.split(".")
    if len(array) < 2:
        return 0

    if array[1] == "xls":
        return 1

    return 0

for root, dirs, files in os.walk(excelDirName):
    for file in files:
        if checkExcelFile(file) == 0:
            continue

        data = xlrd.open_workbook(excelDirName + file)
        protoFileName = file.split('.')[0]

        for sheet in data.sheets():
            protoFileNames.append(protoFileName)

            messageName = sheet.name.encode("utf-8")
            protoMessageNames.append(messageName)

            fileName = protobufDirName + protoFileName + ".proto"
            with open(fileName, 'w+') as outFile:
                outFile.write("option java_package = \"" + packageName + "\";\n\n")
                outFile.write("message "+ messageName +" { \n")

                titles = sheet.row_values(0)
                types = sheet.row_values(1)
                count = 0
                for title in titles:
                    if "" == title:
                        continue
                    type = types[count]
                    count += 1
                    outFile.write("    optional " + str(type) + " " + title + " = " + str(count) + ";\n");

                outFile.write("}\n")

count = 1
configFileName = protobufDirName + "config.proto"
with open(configFileName, 'w+') as configFile:

    for protoName in protoFileNames:
        configFile.write("import \"" + protoName + ".proto\";\n")

    configFile.write("\n")

    configFile.write("option java_package = \"" + packageName + "\";\n\n")

    configFile.write("message ExcelConfig { \n")

    for protoMessageName in protoMessageNames:
        configFile.write("    repeated " + protoMessageName + " " + protoMessageName + "s = " + str(count) + ";\n")
        count += 1

    configFile.write("}\n")