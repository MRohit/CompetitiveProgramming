import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
       // char ch[] = str.toCharArray();
        //int i=0;
        while(t > 0) {
            String str = sc.next();
            for(int i=0;i<str.length();i=i+2){
           // if(i%2==0)
                System.out.print(str.charAt(i));
            //i++;
            }
            System.out.print(" ");
            for(int i=1;i<str.length();i=i+2){
           // if(i%2==0)
                System.out.print(str.charAt(i));
            //i++;
            }
            System.out.println();
            --t;
        }
        
        
    }
}