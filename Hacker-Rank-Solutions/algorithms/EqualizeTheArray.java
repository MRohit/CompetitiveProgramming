import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[] = new int[101];
        for(int i=0;i<n;++i) {
            int c=sc.nextInt();
            a[c]++;
        }
        int max=0;
        for(int i=0;i<101;++i) {
            if(max<a[i])
                max=a[i];
        }
        System.out.println(n-max);
    }
}
