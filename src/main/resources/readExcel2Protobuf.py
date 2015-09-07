# -*- coding: utf-8 -*-
__author__ = 'wanggnim'

import xlrd
import sys
import os

if len(sys.argv) > 1:
    excelDirName = sys.argv[1]
if len(sys.argv) > 2:
    protobufDirName = sys.argv[2]
if len(sys.argv) > 3:
    packageName = sys.argv[3]


print(excelDirName)
print(protobufDirName)
print(packageName)

protoNames = []

for root, dirs, files in os.walk(excelDirName):
    for file in files:
        data = xlrd.open_workbook(excelDirName + "/" + file)
        table = data.sheets()[0]

        fileShortName = file.split('.')[0]
        fileName = protobufDirName + fileShortName + ".proto"

        protoNames.append(fileShortName)

        with open(fileName, 'w+') as outFile:
            outFile.write("option java_package = \"" + packageName + "\";\n")
            outFile.write("\n")
            outFile.write("message "+ fileShortName +" { \n")

            titles = table.row_values(0)
            types = table.row_values(1)
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

    for protoName in protoNames:
        configFile.write("import \"" + protoName + ".proto\";")
        configFile.write("\n")

    configFile.write("\n")

    configFile.write("option java_package = \"" + packageName + "\";\n")
    configFile.write("\n")

    configFile.write("message ExcelConfig { \n")

    for protoName in protoNames:
        configFile.write("    repeated " + protoName + " " + protoName + "s = " + str(count) + ";")
        count += 1

    configFile.write("\n")
    configFile.write("}\n")