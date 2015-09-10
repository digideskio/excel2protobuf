
set workbase=
set excelHome=%workbase%src\main\resources\
set protobufHome=%workbase%src\main\protobuf
set javaHome=%workbase%src\main\java
set cppHome=%workbase%src\main\cpp
set pythonsHome=%workbase%src\main\python

RMDIR /S /Q %protobufHome%
RMDIR /S /Q %javaHome%
RMDIR /S /Q %cppHome%
RMDIR /S /Q %pythonsHome%
MKDIR  %protobufHome%
MKDIR  %javaHome%
MKDIR  %cppHome%
MKDIR  %pythonsHome%

python readExcel2Protobuf.py %excelHome% %protobufHome% "wang.gnim.excel"

echo protoc -I=%protobufHome% --java_out=%javaHome% --cpp_out=%cppHome% --python_out=%pythonsHome% %protobufHome%\*.proto

echo python genDataFromExcelAndProtobuf.py %excelHome% %pythonsHome%

pause