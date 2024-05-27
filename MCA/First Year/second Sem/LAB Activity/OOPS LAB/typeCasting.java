public class typeCasting {
    public static void main(String[] args) {
        // Implicit type casting
        int i = 10;
        long l = i;

        // Explicit type casting
        double d = 10.5;
        int j = (int) d;
        System.out.println("Implicit type Casting:" + l);
        System.out.println("explicit type Casting:" + j);
    }
}
