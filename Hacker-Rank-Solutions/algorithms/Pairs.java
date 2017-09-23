import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n,k;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;++i)
            arr[i] = sc.nextInt();
        Arrays.sort(arr);
        int cnt=0,l=0,r=0;
        while(r<n) {
            int temp = Math.abs(arr[l]-arr[r]);
            //System.out.println(temp);
            if(temp == k) {
               cnt++;
               l++;r++;
            }

            else if(temp <= k)
                r++;
            else
                l++;
        }
        System.out.println(cnt);
    }
}
