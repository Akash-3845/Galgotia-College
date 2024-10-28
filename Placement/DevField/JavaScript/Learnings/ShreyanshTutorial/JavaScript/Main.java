import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        System.out.println("Enter the array value");
        int[] arr = new int[size];
        HashSet<Integer> set = new HashSet<>();
        for(int i  =0 ; i<size; i++){
            arr[i] = s.nextInt();
        }
        for(int i = 0; i<size; i++){
            if(!set.contains(arr[i])){
                set.add(arr[i]);
            }
        }
    for(int val: set){
        System.out.print(val);
    }
    }
}