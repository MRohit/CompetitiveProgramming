import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
		String str = sc.next();
		int len = str.length();
		int row = (int)Math.sqrt(len);
		int col;
		if(row >= Math.sqrt(len))
		    col=row;
		else
		    col = row+1;

	//	System.out.println(col);
		for(int i=0;i<col;i++) {
		    for(int j=i;j<len;j+=col){
		        System.out.print(str.charAt(j));
		    }
		    System.out.print(" ");
		}
    }
}
