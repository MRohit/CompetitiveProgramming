import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static long howManyGames(long p, long d, long m, long s) {
        // Return the number of games you can buy
        long cnt=0,amt=0;

        while(amt <= s) {
            if(p > m) {
                amt = amt + p;
                cnt++;
                p = p - d;
            }else {
                //p = m;
                amt = amt + m;
                cnt++;
            }
            //System.out.println(p);
        }
        return cnt-1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long p = in.nextInt();
        long d = in.nextInt();
        long m = in.nextInt();
        long s = in.nextInt();
        long answer = howManyGames(p, d, m, s);
        System.out.println(answer);
        in.close();
    }
}
