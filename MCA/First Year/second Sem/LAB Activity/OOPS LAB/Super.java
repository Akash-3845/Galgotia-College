class Anim {
    String color = "white";
}

class dog extends Anim {
    String color = "black";

    void printColor() {
        System.out.println(color);// prints color of Dog class
        System.out.println(super.color);// prints color of Animal class
    }
}

public class Super {
    public static void main(String args[]) {
        dog d = new dog();
        d.printColor();
    }
}
