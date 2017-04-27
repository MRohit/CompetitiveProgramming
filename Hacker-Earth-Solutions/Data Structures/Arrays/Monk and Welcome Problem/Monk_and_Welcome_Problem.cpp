#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        b[i] = a[i] + b[i];
        printf("%d ",b[i]);
    }
    return 0;
}

