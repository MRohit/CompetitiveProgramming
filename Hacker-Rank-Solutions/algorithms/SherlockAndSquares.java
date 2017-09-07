import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int s=sc.nextInt();
            int e=sc.nextInt();


            System.out.println((int)(Math.abs((Math.floor(Math.sqrt(e))-Math.ceil(Math.sqrt(s))+1))));

            --t;
        }

    }
}
