public class variables {
    static int staticVar = 10;
    int instanceVar;

    public variables(int instanceVar) {
        this.instanceVar = instanceVar;
    }

    public void demonstrateLocalVariable() {
        int localVar = 5;
        System.out.println("Local variable: " + localVar);
    }

    public static void main(String[] args) {
        System.out.println("Static variable: " + staticVar);
        variables example = new variables(20);
        System.out.println("Instance variable: " + example.instanceVar);
        example.demonstrateLocalVariable();
    }
}