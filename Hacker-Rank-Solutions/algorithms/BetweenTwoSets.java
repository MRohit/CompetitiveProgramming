package algorithms.implementation;

import java.util.Scanner;

public class BetweenTwoSets {

	static int getTotalX(int[] a, int[] b,int alen,int blen){
        // Complete this function
        //Collections.sort(a);
        //Collections.sort(b);
        int cnt=0;
        int flag=0;
       
        for(int i=a[alen-1];i<=b[blen-1];++i){
        	//System.out.println("i:"+i);
            for(int j=0;j<alen;j++){
                if(i%a[j]==0)
                    flag=1;
                else{
                	flag=0;
                    break;
                }
                    
            }
            if(flag==1){
                for(int j=0;j<blen;j++){
                    if(b[j]%i==0)
                        flag=1;
                    else{
                        flag=0;
                        break;
                    }

                } 
            }
            if(flag==1)
                cnt++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int[] b = new int[m];
        for(int b_i=0; b_i < m; b_i++){
            b[b_i] = in.nextInt();
        }
        int total = getTotalX(a, b,n,m);
        System.out.println(total);
    }

}
