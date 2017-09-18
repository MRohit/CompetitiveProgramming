import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int p,q;
        Scanner sc = new Scanner(System.in);
        p=sc.nextInt();
        q=sc.nextInt();
        Boolean flag = false;
        for(int i=p;i<=q;i++) {
            long n = (long) i*i;
            int j=0;
            String no = Long.toString(n);
            int d= Integer.toString(i).length();
            int slen = no.length();
            //System.out.println(d);
            String r = "";
            //System.out.println("slen-d::"+(slen-d)+" d::"+d+" slen::"+slen);
            for(int k=slen-d;k<slen;k++){
                r = r + no.charAt(k);
            }
            int right = 0;
            if(r != "") {
              right  = Integer.valueOf(r);
            }
            String l = "";
            for(int k=0;k<=slen-1-d;k++){
                l = l + no.charAt(k);
            }
            int left = 0;
            if(l != "") {
              left  = Integer.valueOf(l);
            }

            if(left+right == i){
                flag = true;
                System.out.print(i+" ");
            }
        }
        if(!flag){
            System.out.println("INVALID RANGE");
        }

    }
}
