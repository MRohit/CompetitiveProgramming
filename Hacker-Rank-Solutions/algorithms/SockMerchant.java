import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        Set<Integer> s=new HashSet<Integer>();
        int cnt=0;
        for(int ar_i = 0; ar_i < n; ar_i++){
            int no=in.nextInt();
            if(s.contains(no)){
                cnt++;
                s.remove(no);
            }else{
                s.add(no);
            }
            //ar[ar_i] = in.nextInt();
        }
        
        System.out.println(cnt);
    }
}
