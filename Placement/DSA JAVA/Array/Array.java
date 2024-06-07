import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int size = sc.nextInt();
        int[] array = new int[size];
        System.out.println("Enter the Element of array");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        System.out.println("The element of array is");
        for (int num : array) {

            System.out.print(num+" ");
        }
        sc.close();
    }
}