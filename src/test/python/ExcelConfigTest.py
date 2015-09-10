# -*- coding: utf-8 -*-

__author__ = 'wanggnim'

import sys
import os
import imp

sys.path.append("..\..\main\python")

print("DefaultEncoding : " + sys.getdefaultencoding())

import config_pb2
import BiyunLevel_pb2

def readFromFile():
    excelConfig = config_pb2.ExcelConfig()
    with open("../../main/resources/data.pb", 'rb') as dapaPB:
        content = dapaPB.read()
        excelConfig2 = excelConfig.ParseFromString(content)
        print("resource: " + bytes(excelConfig2))

def write2File():
    excelConfig = config_pb2.ExcelConfig()

    biyunLevel = excelConfig.Sheet1s.add()
    biyunLevel.level = 123456

    content = excelConfig.SerializeToString()

    with open("./data.pb", 'w+') as dapaPB:
        dapaPB.write(content)

def readFromJavaFile():
    excelConfig = config_pb2.ExcelConfig()
    with open("../java/data.pb", 'rb') as dapaPB:
        content = dapaPB.read()
        excelConfig.ParseFromString(content)
        biyunLevel1 = excelConfig.Sheet1s[0]
        print("Java: " + str(biyunLevel1.level))

def readFromPythonFile():
    write2File();
    with open("./data.pb", 'r+') as dapaPB:
        content1 = dapaPB.read()
        excelConfig2 = config_pb2.ExcelConfig()
        excelConfig2.ParseFromString(content1)
        biyunLevel2 = excelConfig2.Sheet1s[0]
        print("Python: " + str(biyunLevel2.level))

readFromFile()
write2File()
readFromPythonFile()
readFromJavaFile()

