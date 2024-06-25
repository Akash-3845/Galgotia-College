import java.util.Scanner;

// Custom exception class
class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class AgeValidator {

    // Method to check age and throw custom exception if age is less than 18
    public static void validateAge(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Age must be 18 or older.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            // Prompt user to enter their age
            System.out.print("Enter your age: ");
            int age = scanner.nextInt();

            // Validate age
            validateAge(age);

            // If age is valid, print a success message
            System.out.println("Age is valid. You are " + age + " years old.");

        } catch (InvalidAgeException e) {
            // Handle the custom exception
            System.out.println("InvalidAgeException: " + e.getMessage());
        } catch (Exception e) {
            // Handle any other exceptions
            System.out.println("An error occurred: " + e.getMessage());
        } finally {
            // Close the scanner
            scanner.close();
        }
    }
}
