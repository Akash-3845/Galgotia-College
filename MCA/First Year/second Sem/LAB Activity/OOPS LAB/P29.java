class MyCustomException extends Exception {
    public MyCustomException(String message) {
        super(message);
    }
}
public class P29 {
    public static void main(String[] args) {
        try {
            validateAge(15);
        } catch (MyCustomException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
    public static void validateAge(int age) throws MyCustomException {
        if (age < 18) {
            throw new MyCustomException("Age is less than 18, access denied.");
        } else {
            System.out.println("Access granted.");
        }
    }
}

