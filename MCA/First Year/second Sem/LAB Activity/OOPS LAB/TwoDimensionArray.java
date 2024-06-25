public class TwoDimensionArray {
    public static void main(String[] args) {
        // Define and initialize a 2D array
        int[][] array = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        // Perform addition of all elements in the 2D array
        int sum = 0;
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                sum += array[i][j];
            }
        }
        // Perform multiplication of all elements in the 2D array
        int product = 1;
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                product *= array[i][j];
            }
        }

        // Print the results
        System.out.println("Sum of all elements in the 2D array: " + sum);
        System.out.println("Product of all elements in the 2D array: " + product);
    }
}
