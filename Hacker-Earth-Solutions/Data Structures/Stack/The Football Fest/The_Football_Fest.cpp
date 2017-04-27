#include <iostream>
#include<stdio.h>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int t;
	long n,id;
	scanf("%d",&t);
	
	while(t>0){
	    scanf("%ld %ld", &n,&id);
	    stack<long> sts;
	    sts.push(id);
	    
	    char c;
	    while(n > 0){
	        scanf(" %c",&c);
	        if(c == 'P') {
	            scanf("%ld",&id);
	            sts.push(id);
	        } else {
	            long x = sts.top();
	            sts.pop();
	            long y = sts.top();
	            sts.pop();
	            sts.push(x);
	            sts.push(y);
	        }
	        n--;
	    }
	    printf("Player %ld\n",sts.top());
	    t--;
	}
	return 0;
}
