import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int person,topics;
		Scanner sc=new Scanner(System.in);
		person=sc.nextInt();
		topics=sc.nextInt();
		int arr[][]=new int[person][topics];
		for(int i=0;i<person;++i){
		    String str[] = sc.next().split("");
		    for(int j=0;j<topics;j++){
		        arr[i][j] = Integer.valueOf(str[j]);
		    }
		}
		/*
		for(int i=0;i<person;++i){
		    //String str[] = sc.next().split("");
		    System.out.println();
		    for(int j=0;j<topics;j++){
		        System.out.print(arr[i][j]+" ");
		    }
		}
		*/
		int maxTopics = -1,maxTeam = 0;
		for(int i=0;i<person;i++) {
		    for(int j=i+1;j<person;j++) {
		         int cnt=0;
		         if(i!=j) {
		            for(int k=0;k<topics;k++) {
    		            if(arr[j][k] == 1 || arr[i][k] == 1) {
    		                cnt++;
    		            }
    		        }
    		        if(cnt>maxTopics){
    		            maxTopics = cnt;
    		            maxTeam = 1;
    		        } else if(cnt == maxTopics){
    		            maxTeam++;
    		        }
		         }

		    }
		}
		System.out.println(maxTopics);
		System.out.println(maxTeam);
    }
}
