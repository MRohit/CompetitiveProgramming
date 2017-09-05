import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
        Map<Integer,Integer> hmap = new HashMap<Integer,Integer>();
        int max =0,maxIndex = 1;
        for(int i=0;i<n;++i) {
            if(hmap.containsKey(ar[i])) {
                int cnt = hmap.get(ar[i]);
                cnt++;
                hmap.put(ar[i],cnt);
                if(max <= cnt) {
                    if(maxIndex > ar[i] && max == cnt){
                        maxIndex = ar[i];
                    }else

                        maxIndex = ar[i];
                    max=cnt;
                }

            }else{
                hmap.put(ar[i],1);
            }
        }
        return maxIndex;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
