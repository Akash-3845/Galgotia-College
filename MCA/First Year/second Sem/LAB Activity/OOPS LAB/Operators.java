public class Operators {

    public static void main(String[] args) {
        int a = 10, b = 5;

        // Arithmetic Operators
        System.out.println("Arithmetic Operators:");
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));

        // Relational Operators
        System.out.println("\nRelational Operators:");
        System.out.println("a == b: " + (a == b));
        System.out.println("a != b: " + (a != b));
        System.out.println("a > b: " + (a > b));
        System.out.println("a < b: " + (a < b));
        System.out.println("a >= b: " + (a >= b));
        System.out.println("a <= b: " + (a <= b));

        // Logical Operators
        System.out.println("\nLogical Operators:");
        System.out.println("(a > b) && (a < 15): " + ((a > b) && (a < 15)));
        System.out.println("(a > b) || (b < 2): " + ((a > b) || (b < 2)));
        System.out.println("!(a == b): " + !(a == b));

        // Bitwise Operators
        System.out.println("\nBitwise Operators:");
        System.out.println("a & b: " + (a & b));
        System.out.println("a | b: " + (a | b));
        System.out.println("a ^ b: " + (a ^ b));
        System.out.println("~a: " + (~a));
        System.out.println("a << 2: " + (a << 2));
        System.out.println("a >> 2: " + (a >> 2));

        // Assignment Operators
        System.out.println("\nAssignment Operators:");
        a += b;
        System.out.println("a += b: " + a);
        a -= b;
        System.out.println("a -= b: " + a);
        a *= b;
        System.out.println("a *= b: " + a);
        a /= b;
        System.out.println("a /= b: " + a);
        a %= b;
        System.out.println("a %= b: " + a);

        // Unary Operators
        System.out.println("\nUnary Operators:");
        System.out.println("++a: " + (++a));
        System.out.println("--a: " + (--a));
        System.out.println("a++: " + (a++));
        System.out.println("a--: " + (a--));

        // Ternary Operator
        System.out.println("\nTernary Operator:");
        System.out.println("a > b ? a : b: " + (a > b ? a : b));
    }
}
