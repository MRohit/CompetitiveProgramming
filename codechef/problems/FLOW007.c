#include <stdio.h>

int main(void) {
	int t,n,num;
	scanf("%d",&t);
	while(t>0)
	{
	       scanf("%d",&n);
	       num=0;
	       while(n!=0)
	       {
	           num=num*10;
	           num=num+n%10;
	           n=n/10;
	       }
	       printf("\n%d",num);
	       t--;
	}
	return 0;
}
