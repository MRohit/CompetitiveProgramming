import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int count = 0;
        if(s.length() > 0) {
            count = 1;
            char[] arr = s.toCharArray();
            for(int i=0;i<s.length();i++) {
                if(Character.isUpperCase(s.charAt(i)))
                    count++;
            }
        }
        System.out.println(count);
    }
}
