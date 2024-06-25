import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;
public class P31 {
    public static void main(String[] args) {
    String data = "Hello, this is a test message!";
        try (FileWriter writer = new FileWriter("example.txt")) {
            writer.write(data);
            System.out.println("Data has been written to the file.");
        } catch (IOException e) {
            System.err.println("An IOException occurred during writing: " + e.getMessage());
        }
        try (FileReader reader = new FileReader("example.txt")) {
            int character;
            System.out.print("Data read from the file: ");
            while ((character = reader.read()) != -1) {
                System.out.print((char) character);
            }
        } catch (IOException e) {
            System.err.println("An IOException occurred during reading: " + e.getMessage());
        }
    }
}

