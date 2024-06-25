public class P27{
    public static void main(String[] args) {
        int numerator = 60;
        int denominator = 30;
        int result = 0;
 try {
result = numerator / denominator;
System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
         System.out.println("Exception caught: " + e.getMessage());
        } finally {
           System.out.println("Finally block executed.");
        }
System.out.println("Program continues...");
    }
} 
