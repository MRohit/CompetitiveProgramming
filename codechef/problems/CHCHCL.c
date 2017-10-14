#include<stdio.h>
int main(void)
{
  int t;
  long long int n,m;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lld%lld",&n,&m);
    long long int s=n*m;
    if(s%2==0)
    printf("Yes\n");
    else
    printf("No\n");
  }
  return 0;
}
