import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] height = new int[n];
        int max=0;
        for(int height_i=0; height_i < n; height_i++){
            int no=in.nextInt();
            if(max < no)
                max=no;
        }
        //Collections.sort(height);
        System.out.println((max>k)?max-k:"0");
        // your code goes here
    }
}
