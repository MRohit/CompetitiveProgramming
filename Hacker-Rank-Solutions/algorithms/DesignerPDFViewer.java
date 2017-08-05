import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        char c='a';
        Map<String,Integer> m=new HashMap<String,Integer>();
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();

            m.put(String.valueOf(c),h[h_i]);
            //System.out.print(c+" ");
            c++;

        }
        String word = in.next();
        int max=1;
        for(int i=0;i<word.length();++i){
            if(m.get((String.valueOf(word.charAt(i))))!=null && max<m.get(String.valueOf(word.charAt(i))))
                max=m.get((String.valueOf(word.charAt(i))));
        }
        System.out.println(max*word.length());
    }
}
