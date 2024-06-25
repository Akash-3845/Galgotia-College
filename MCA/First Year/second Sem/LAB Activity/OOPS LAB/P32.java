import java.io.Console;
public class P32 {
    public static void main(String[] args) {
        // Obtain the Console instance
        Console console = System.console();
        
        if (console == null) {
            System.out.println("No console available");
            return;
        }
        // Read a line from the console
        String name = console.readLine("Enter your name: ");        
        // Read a password from the console (input won't be displayed)
        char[] passwordArray = console.readPassword("Enter your password: ");
        String password = new String(passwordArray);        
        // Display the read information
        console.printf("Hello, %s! Your password is: %s%n", name, password);
    }
}

