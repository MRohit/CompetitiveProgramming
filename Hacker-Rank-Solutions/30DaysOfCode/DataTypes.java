mport java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);
        /* Declare second integer, double, and String variables. */
        int j;
        double d2;
        String s2;
        
        /* Read and save an integer, double, and String to your variables.*/
        j =scan.nextInt();
        d2 = scan.nextDouble();
        scan.nextLine();
        s2 = scan.nextLine();
        /* Print the sum of both integer variables on a new line. */
        int sum = i + j;
        System.out.println(sum);
        /* Print the sum of the double variables on a new line. */
        double sum2 = d + d2;
		System.out.println(sum2);
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        String s3 = s.concat(s2);
        System.out.println(s3);
	    scan.close();
    }
}