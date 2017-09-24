import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {



    public static void main(String[] args) {
        int n,k;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();

        int price=0;
        if(k==n) {
            for(int i=0;i<n;++i)
                price = price + sc.nextInt();
        }
        else {
            int arr[] = new int[n];
            for(int i=0;i<n;++i)
                arr[i] = sc.nextInt();
            Arrays.sort(arr);
            int karr[] = new int [k];
            int kIndex = 0;
            for(int i = n-1;i>=0;i--) {
                price = price + ((karr[kIndex] + 1) * arr[i]);
                karr[kIndex]++;
                kIndex++;
                if(kIndex >= k)
                    kIndex=0;
            }


        }
        System.out.println(price);
    }
}
