class Example {
    // Default constructor
    public Example() {
        this("Default message"); // Call the parameterized constructor
        System.out.println("Default constructor called");
    }

    // Parameterized constructor
    public Example(String message) {
        System.out.println("Parameterized constructor called with message: " + message);
    }
}

public class chainingConstructor {
    public static void main(String[] args) {
        // Create an object of the Example class
        Example example = new Example();
    }
}
