package algorithms.warmup;

import java.util.*;

public class BirthdayCakeCandles {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		long n=sc.nextLong();
		long cnt=1,max=0,h;
		for(int i=0;i<n;++i){
			h=sc.nextLong();
			if(h==max){
				cnt++;
			}else if(h>max){
				max=h;cnt=1;
			}
		}
		System.out.println(cnt);
	}

}
