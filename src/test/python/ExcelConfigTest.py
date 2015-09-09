__author__ = 'wanggnim'


import sys
import os
import imp

sys.path.append("..\..\main\python")

import config_pb2

excelConfig = config_pb2.ExcelConfig()
with open("../../main/resources/data.pb", 'r+') as dapaPB:
    content = dapaPB.read()
    # print(content)
    excelConfig.ParseFromString(content)