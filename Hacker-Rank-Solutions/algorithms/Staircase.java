package algorithms.warmup;

import java.util.Scanner;

public class Staircase {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int j=0;j<n;j++){
            for(int i=1;i<=n;i++){
                System.out.print(i<n-j?" ":"#");
            }
            System.out.println("");
        }
	}

}
