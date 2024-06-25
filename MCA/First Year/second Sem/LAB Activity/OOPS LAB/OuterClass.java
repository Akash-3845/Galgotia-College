public class OuterClass {
    private String outerField = "Outer field";
    private static String staticOuterField = "Static outer field";

    // Member Inner Class
    class MemberInnerClass {
        void display() {
            System.out.println("Accessing outer class field from Member Inner Class: " + outerField);
        }
    }

    // Static Nested Class
    static class StaticNestedClass {
        void display() {
            System.out.println("Accessing outer class static field from Static Nested Class: " + staticOuterField);
        }
    }

    // Method to demonstrate Local Inner Class
    void methodWithLocalInnerClass() {
        class LocalInnerClass {
            void display() {
                System.out.println("Accessing outer class field from Local Inner Class: " + outerField);
            }
        }
        LocalInnerClass localInner = new LocalInnerClass();
        localInner.display();
    }

    // Method to demonstrate Anonymous Inner Class
    void methodWithAnonymousInnerClass() {
        Greeting greeting = new Greeting() {
            @Override
            public void greet() {
                System.out.println("Hello from the Anonymous Inner Class!");
            }
        };
        greeting.greet();
    }

    // Interface for Anonymous Inner Class
    interface Greeting {
        void greet();
    }

    public static void main(String[] args) {
        OuterClass outer = new OuterClass();

        // Member Inner Class
        MemberInnerClass memberInner = outer.new MemberInnerClass();
        memberInner.display();

        // Static Nested Class
        StaticNestedClass staticNested = new StaticNestedClass();
        staticNested.display();

        // Local Inner Class
        outer.methodWithLocalInnerClass();

        // Anonymous Inner Class
        outer.methodWithAnonymousInnerClass();
    }
}

