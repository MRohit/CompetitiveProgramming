import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    

   public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;++i){
			int grade=sc.nextInt();
			if(((grade+1)%5==0 || (grade+2)%5==0) && grade >=38){
				grade=(grade+1)%5==0? grade+1:grade+2;
				
			}else if((grade+3)%5==0 || grade<38){
				
			}
			System.out.println(grade);
		}
	}
}
