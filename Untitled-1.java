import java.util.*;

public class Untitled {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();
        for (int i = 0; i < testCases; i++) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            System.out.print(squar(arr));
        }

        sc.close();
    }

    public static String squar(int[] input) {
        int sum = 0;
        for (int val : input) {
            sum += val;
        }
        for (int i = 1; i < sum; i++) {
            if (i * i == sum) {
                return "Yes";
            }
        }
        return "No";
    }
}