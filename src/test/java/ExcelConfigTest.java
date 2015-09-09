import com.google.protobuf.ByteString;
import org.junit.Ignore;
import org.junit.Test;
import wang.gnim.excel.Config;

import java.io.*;

/**
 *
 * Created by wanggnim on 2015/9/6.
 */
public class ExcelConfigTest {

    @Test
    @Ignore
    public void testParse() {
        File file = new File(".\\src\\main\\resources\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println(config.getBiyunLevelsCount());
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(in);
            System.out.println(config1.getBiyunLevelsCount());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void testParse1() {
        File file = new File(".\\src\\test\\java\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println(config.getBiyunLevelsCount());
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(in);
            System.out.println(config1.getBiyunLevelsCount());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

}
