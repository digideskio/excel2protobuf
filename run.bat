
echo set workbase=D:\workspace\百度云同步盘\project\github\excel2protobuf\trunk
set workbase=.

set excelHome="%workbase%\excel"
set protobufHome=%workbase%\src\main\protobuf
set javaHome=%workbase%\src\main\java
set cppHome=%workbase%\src\main\cpp
set pythonHome=%workbase%\src\main\python

python ./src/main/resources/readExcel2Protobuf.py %excelHome% %protobufHome% "wang.gnim.excel"

protoc-2.6.1-win32\protoc -I=%protobufHome% --java_out=%javaHome% --cpp_out=%cppHome% --python_out=%pythonHome% %protobufHome%/*.proto

python ./src/main/resources/genDataFromExcelAndProtobuf.py %excelHome%

pause