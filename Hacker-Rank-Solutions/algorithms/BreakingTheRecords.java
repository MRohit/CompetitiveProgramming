import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        int max=0,low=0,mcnt=0,lcnt=0;
        for(int s_i=0; s_i < n; s_i++){
            int score=in.nextInt();
            
            if(s_i==0){
                max=low=score;
                //mcnt++;lcnt++;
            }else 
            if(score > max){
                max=score;
                mcnt++;
            }else 
            if(score<low){
                low=score;
                lcnt++;
            }
        }
        System.out.println(mcnt+" "+lcnt);
    }
}
