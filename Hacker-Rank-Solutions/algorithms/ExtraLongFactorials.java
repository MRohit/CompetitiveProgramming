import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class Solution {
    static BigInteger factorial(int n){
        BigInteger f=new BigInteger("1");
        for(int i=2;i<=n;++i)
            f=f.multiply(BigInteger.valueOf(i));
        return f;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt();
        System.out.println(factorial(no));
    }
}
