import com.google.protobuf.ByteString;
import org.apache.commons.io.FileUtils;
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
    public void testParseByteString() {
        File file = new File(".\\src\\test\\python\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println(config.getBiyunLevelsCount());
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void testParseInputStream() {
        File file = new File(".\\src\\test\\python\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(in);
            System.out.println(config1.getBiyunLevelsCount());
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void testParseCommonsIO() {
        File file = new File(".\\src\\test\\python\\data.pb");
        try {
            byte[] bytes = FileUtils.readFileToByteArray(file);
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(bytes);
            System.out.println(config1.getBiyunLevelsCount());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
