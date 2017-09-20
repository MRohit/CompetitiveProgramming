import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int count = 0, testCases = 0,start=0,end=0;
        Scanner sc = new Scanner(System.in);
        count=sc.nextInt();
        testCases=sc.nextInt();
        int width[] = new int[count];
        for(int i=0;i<count;i++){
            width[i]=sc.nextInt();
        }

        //int max=0;
        for(int j=0;j<testCases;j++){
            start=sc.nextInt();
            end=sc.nextInt();
            int max=width[start];
            for(int k=start;k<=end;k++){
                max = max < width[k] ? max : width[k];

            }
            System.out.println(max);
        }
    }
}
