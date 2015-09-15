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
	
### 举例说明
假设我们有一个`BiyunLevel.xls`的文件, 这个文件只有一个表单`Sheet1`. 
```
|level	|star1	|
|------:|:-----:|
|uint32	|uint32	|
|------:|:-----:|
|1		|30		|
|------:|:-----:|
|2		|30		|
|------:|:-----:|
```
它会生成文件名为`BiyunLevel.proto`的proto文件
```
message Sheet1 { 
    optional uint32 level = 1;
    optional uint32 star1 = 2;
}
```

#### Excel文件结构说明
* excel文件的sheet名为proto文件内的message名称.(中文名过滤TODO)
* excel文件第一行为标题名,会作为message内部的变量名(必须为英文,强烈建议采用驼峰式写法)
* excel文件第二行是message的字段类型

#### config.proto文件生成
我们默认还生成一个`config.proto`的文件.
```
import "BiyunLevel.proto";

message ExcelConfig { 
    repeated Sheet1 Sheet1s = 1;
}
```
`ExcelConfig`每个字段类型对应的都是excel文件内的sheet.

#### java代码实例
下面举例如何引用
```java
		File file = new File(".\\src\\main\\resources\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            in.read();
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println(config.getSheet1SCount());
            for (BiyunLevel.Sheet1 sheet1 : config.getSheet1SList()) {
                System.out.println(sheet1.getLevel() + "   " + sheet1.getStar1());
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
```