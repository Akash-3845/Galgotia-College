import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.IOException;
public class P30 {
    public static void main(String[] args) {
        String data = "Hello, this is a test message!";
        byte[] dataBytes = data.getBytes();
        try (FileOutputStream fos = new FileOutputStream("output.txt")) {
            fos.write(dataBytes);
            System.out.println("Data written to file successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred during writing to the file: " + e.getMessage());
        }
        try (FileInputStream fis = new FileInputStream("output.txt")) {
            int byteData;
            while ((byteData = fis.read()) != -1) {
                System.out.print((char) byteData);
            }
            System.out.println(); // For a new line after file content
        } catch (IOException e) {
            System.out.println("An error occurred during reading from the file: " + e.getMessage());
        }
    }
}

