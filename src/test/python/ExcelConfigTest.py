__author__ = 'wanggnim'


import sys
import os
import imp

sys.path.append("..\..\main\python")

import config_pb2
import biyunLevel_pb2

def readFromFile():
    excelConfig = config_pb2.ExcelConfig()
    with open("../../main/resources/data.pb", 'rb') as dapaPB:
        content = dapaPB.read()
        # print(content)
        excelConfig.ParseFromString(content)

def readFromMemory():
    excelConfig = config_pb2.ExcelConfig()

    biyunLevel = excelConfig.biyunLevels.add()
    biyunLevel.level = 123456

    content = excelConfig.SerializeToString()

    excelConfig1 = config_pb2.ExcelConfig()
    excelConfig1.ParseFromString(content)
    biyunLevel1 = excelConfig1.biyunLevels[0]
    print(biyunLevel1.level)

    with open("./data.txt", 'w+') as dapaPB:
        dapaPB.write(bytes(excelConfig))

    with open("./data.pb", 'w+') as dapaPB:
        dapaPB.write(content)

    with open("./data.pb", 'r+') as dapaPB:
        content1 = dapaPB.read()
        excelConfig2 = config_pb2.ExcelConfig()
        excelConfig2.ParseFromString(content1)
        biyunLevel2 = excelConfig2.biyunLevels[0]
        print(biyunLevel2.level)

readFromMemory()
# readFromFile()

