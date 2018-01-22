import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int g = in.nextInt();
        for(int a0 = 0; a0 < g; a0++){
            int n = in.nextInt();
            int m = in.nextInt();
            int x = in.nextInt();
            int[] a = new int[n];
            for(int a_i=0; a_i < n; a_i++){
                a[a_i] = in.nextInt();
            }
            int[] b = new int[m];
            for(int b_i=0; b_i < m; b_i++){
                b[b_i] = in.nextInt();
            }
            // your code goes here
            int i = 0, j = 0, sum = 0, cnt = 0;
            while (i < n && sum + a[i] <= x) {
                sum = sum + a[i];
                i++;
                cnt++;
            }
            while (j < m && i >=0) {
                sum+=b[j];
                j++;

                while (sum > x && i > 0) {
                    i--;
                    sum-=a[i];
                }
                if (sum <= x && i+j > cnt)
                    cnt = i + j;

            }
            System.out.println(cnt);
        }
    }
}
