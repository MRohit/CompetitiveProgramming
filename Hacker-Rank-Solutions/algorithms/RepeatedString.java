import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        long n = in.nextLong();
        long cnt=0;
        for(int i=0;i<s.length();++i){
            if(s.charAt(i) == 'a')
                cnt++;
        }

        long factor = n/s.length();
        long rem = n%s.length();;
        cnt = cnt*factor;
        for(int i=0;i<rem;++i){
            if(s.charAt(i) == 'a')
                cnt++;
        }
        System.out.println(cnt);

    }
}
