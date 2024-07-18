class parent {
    void display(String name) {
        System.out.println(name);
    }
}

class child extends parent {
    @Override
    void display(String name) {

        super.display("Hello " + name);
    }
}

/**
 * methodOver
 */
public class methodOver {
    public static void main(String[] args) {
        parent p = new parent();
        child c = new child();
        p.display("Akash");
        c.display("Akash");
    }

}