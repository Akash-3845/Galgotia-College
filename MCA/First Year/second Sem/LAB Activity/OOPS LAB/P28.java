class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class P28 {
    public static void validateAge(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Age is not valid, must be 18 or older.");
        } else {
            System.out.println("Age is valid.");
        }
    }

    public static void main(String[] args) {
        int[] testAges = { 15, 20, 17, 21 };
        System.out.println("Ages are:- \n" + testAges[0] + "\n" + testAges[1] + "\n" + testAges[2] + "\n" + testAges[3]
                + "\nResults:-");
        for (int age : testAges) {
            try {
                validateAge(age);
            } catch (InvalidAgeException e) {
                System.out.println("Exception caught: " + e.getMessage());
            }
        }
    }
}
