public class ArrayCopyDemo {
    public static void main(String[] args) {
        int[] sourceArray = {1, 2, 3, 4, 5};
        int[] destinationArray = new int[sourceArray.length];
        for (int i = 0; i < sourceArray.length; i++) {
            destinationArray[i] = sourceArray[i];
        }
        System.out.println("Source Array: ");
        for (int element : sourceArray) {
            System.out.print(element + " ");
        }
        System.out.println("\nDestination Array: ");
        for (int element : destinationArray) {
            System.out.print(element + " ");
        }
    }
}
