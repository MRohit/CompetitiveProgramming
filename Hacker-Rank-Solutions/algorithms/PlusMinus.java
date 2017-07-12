package algorithms.warmup;

import java.util.Scanner;

public class PlusMinus {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int no;
		int pos=0,neg=0,zero=0;
		for(int  i=0;i<n;++i) {
			no=sc.nextInt();
			if(no==0)
				zero++;
			else if(no>0)
				pos++;
			else
				neg++;
		}
		System.out.println((float)pos/n);
		System.out.println((float)neg/n);
		System.out.println((float)zero/n);
		
	}

}
