public class P38<T> {
    private T data;

    public P38(T data) {
        this.data = data;
    }

    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }

    public static void main(String[] args) {
        // Create a P38 with Integer type
        P38<Integer> intExample = new P38<>(10);
        System.out.println("Data from Integer example: " + intExample.getData());
        P38<String> stringExample = new P38<>("Hello");
        System.out.println("Data from String example: " + stringExample.getData());
        P38<Double> doubleExample = new P38<>(5.5);
        System.out.println("Data from Double example: " + doubleExample.getData());
    }
}