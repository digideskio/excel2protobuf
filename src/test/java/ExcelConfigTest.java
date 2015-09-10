import com.google.protobuf.ByteString;
import org.apache.commons.io.FileUtils;
import org.junit.Before;
import org.junit.Ignore;
import org.junit.Test;
import wang.gnim.excel.BiyunLevel;
import wang.gnim.excel.Config;

import java.io.*;

/**
 *
 * Created by wanggnim on 2015/9/6.
 */
public class ExcelConfigTest {

    @Test
    public void testParse() {
        File file = new File(".\\src\\main\\resources\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            in.read();
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println(config.getSheet1SCount());
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(in);
            System.out.println(config1.getSheet1SCount());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    @Ignore
    public void testParseCommonsIO() {
        File file = new File(".\\src\\test\\java\\data.pb");
        try {
            byte[] bytes = FileUtils.readFileToByteArray(file);
            Config.ExcelConfig config1 = Config.ExcelConfig.parseFrom(bytes);
            System.out.println(config1.getSheet1SCount());

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Before
    public void generateFile() {
        BiyunLevel.Sheet1 level = BiyunLevel.Sheet1.newBuilder().setLevel(123456).build();
        Config.ExcelConfig config = Config.ExcelConfig.newBuilder()
                .addSheet1S(level)
                .build();

        File file = new File(".\\src\\test\\java\\data.pb");
        try(OutputStream out = new FileOutputStream(file)) {
            out.write(config.toByteArray());
            out.flush();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void testParsePythonFile() {
        File file = new File(".\\src\\test\\python\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            in.read();
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println("Python : " + config.getSheet1SCount());
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @Test
    public void testParseJavaFile() {
        File file = new File(".\\src\\test\\java\\data.pb");
        try(InputStream in = new FileInputStream(file)) {
            ByteString bs = ByteString.readFrom(in);
            Config.ExcelConfig config = Config.ExcelConfig.parseFrom(bs);
            System.out.println("Java : " + config.getSheet1SCount());
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

}
