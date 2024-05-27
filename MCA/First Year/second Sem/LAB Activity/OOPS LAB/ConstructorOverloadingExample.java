public class ConstructorOverloadingExample {
    int id;
    String name;
    int age;

    public ConstructorOverloadingExample() {
        this.id = 0;
        this.name = "Unknown";
        this.age = 0;
    }

    public ConstructorOverloadingExample(int id) {
        this.id = id;
        this.name = "Unknown";
        this.age = 0;
    }

    public ConstructorOverloadingExample(int id, String name) {
        this.id = id;
        this.name = name;
        this.age = 0;
    }

    public ConstructorOverloadingExample(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public void display() {
        System.out.println("ID: " + id + ", Name: " + name + ", Age: " + age);
    }

    public static void main(String[] args) {
        // Creating objects using different constructors
        ConstructorOverloadingExample obj1 = new ConstructorOverloadingExample();
        ConstructorOverloadingExample obj2 = new ConstructorOverloadingExample(1);
        ConstructorOverloadingExample obj3 = new ConstructorOverloadingExample(2, "Alice");
        ConstructorOverloadingExample obj4 = new ConstructorOverloadingExample(3, "Bob", 25);

        obj1.display();
        obj2.display();
        obj3.display();
        obj4.display();
    }
}
