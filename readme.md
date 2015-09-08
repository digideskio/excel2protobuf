# 说明

### 安装
* 需要安装[xlrd](https://pypi.python.org/pypi/xlrd)
* 下载[protobuf](https://developers.google.com/protocol-buffers/docs/downloads?hl=zh-cn)
* 在环境路径中添加'protoc'(当前版本是2.6.1)
* 在目录`protobuf-2.6.1/python`执行
```
	python setup.py build
	python setup.py google_test
	python setup.py install
```
	
### Excel文件说明
* excel文件第一行是proto文件的字段名(字段名强烈建议采用驼峰式写法,第一个字母大写)
* excel文件第二行是proto文件的字段类型
* excel文件名强烈建议采用驼峰式写法,第一个字母大写
* excel文件名必须是英文加数字,中文名会过滤掉

