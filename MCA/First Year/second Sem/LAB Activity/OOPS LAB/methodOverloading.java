public class methodOverloading {
    public void display() {
        System.out.println("display method ");
    }

    public void display(int a) {
        System.out.println("the value is :" + a);
    }

    public void display(String name) {
        System.out.println("the name is :" + name);
    }
    public static void main(String[] args) {
        methodOverloading T = new methodOverloading();
        T.display();
        T.display(15);
        T.display("AkashYadav");
    }
}
