#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int t,n;
	long a[10000];
	scanf("%d",&t);
	while(t>0){
	    scanf("%d",&n);
	    scanf("%ld",&a[0]);
	    long max = a[0];
	    long count = 1;
	    for(int i=1;i<n;i++){
	        scanf("%ld",&a[i]);
	        if(a[i] <=max){
	            count++;
	            max = a[i];
	        }
	    }
	    printf("%ld\n",count);
	    t--;
	}
	return 0;
}
