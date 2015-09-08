import com.google.protobuf.ByteString;
import org.junit.Test;
import wang.gnim.excel.Config;

import java.io.*;

/**
 * Created by wanggnim on 2015/9/6.
 */
public class ExcelConfigTest {


    @Test
    public void testParse() {
        File file = new File("D:\\workspace\\百度云同步盘\\project\\github\\excel2protobuf\\trunk\\src\\main\\resources\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig.parseFrom(bs);
//            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(in);

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
