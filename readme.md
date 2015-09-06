# 说明

* 需要安装[xlrd](https://pypi.python.org/pypi/xlrd)
* 下载[protobuf](https://developers.google.com/protocol-buffers/docs/downloads?hl=zh-cn)
* 在环境路径中添加'protoc'(当前版本是2.6.1)
* 在目录`protobuf-2.6.1/python`执行
	```
	python setup.py build
	python setup.py google_test
	python setup.py install
	```
