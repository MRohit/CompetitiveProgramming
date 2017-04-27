#include <iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
    long a[100000];
    int n,r,j=0,t;
    scanf("%d",&t);
    while(t>0){
        scanf("%d%d",&n,&r);
        j = r % n;
        for(int i=0;i<n;i++) {
            scanf("%ld",&a[j]);
            j=(j+1)%n;
        }
        for(int i=0;i<n;i++)
            printf("%ld ",a[i]);
        printf("\n");
        t--;
    }
    return 0;
}