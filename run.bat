
python ./src/main/resources/readExcel2Protobuf.py D:\workspace\百度云同步盘\project\github\excel2protobuf\trunk\excel ../protobuf/ "wang.gnim.excel"

protoc-2.6.1-win32/protoc -I=./src/main/protobuf --java_out=./src/main/java --cpp_out=./src/main/cpp --python_out=./src/main/python ./src/main/protobuf/*.proto

cd src/main/python

python ../resources/genDataFromExcelAndProtobuf.py ./excel/

pause