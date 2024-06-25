interface Drawable {
    void draw();
}

class Circle implements Drawable {
    public void draw() {
        System.out.println("Drawing Circle");
    }

}

public class interf {

    public static void main(String[] args) {
        Circle cr = new Circle();
        cr.draw();
    }
}
