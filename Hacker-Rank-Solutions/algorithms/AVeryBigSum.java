import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Long sum = 0l;
        List<Long> arr = new ArrayList<Long> ();
        for(int arr_i=0; arr_i < n; arr_i++){
            arr.add(in.nextLong());
        }
        for(int arr_i=0; arr_i < n; arr_i++){
            sum = sum + arr.get(arr_i);
        }
        System.out.println(sum);
    }
}
