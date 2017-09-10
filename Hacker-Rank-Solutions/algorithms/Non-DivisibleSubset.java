import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

		int n,k;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k=sc.nextInt();
		int arr[] = new int[k];
		int maxSize = 0;
		for(int i=0;i<n;++i){
		    arr[sc.nextInt()%k]++;
		}
		/*
		for(int i=0;i<k;++i){
		    System.out.println(arr[i]);
        }*/
        if(k%2 == 0)    maxSize++;
        maxSize = maxSize + Math.min(arr[0],1);
        for(int x = 1;x <= k/2;++x) {
            if(x!=k-x) {
                maxSize+=Math.max(arr[x],arr[k-x]);
            }
        }
		System.out.println(maxSize);
    }
}
