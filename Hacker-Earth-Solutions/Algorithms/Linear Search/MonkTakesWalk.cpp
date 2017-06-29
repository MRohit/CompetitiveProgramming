#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

    char a[1000000];
    long n;
    int cnt=0;
    long i=0;
    scanf("%ld",&n);
    while(n>0){
        scanf("%s",a);
        
        while(a[i] != '\0'){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                cnt++;
            i++;
        }
        
        printf("%d\n",cnt);
        cnt=0;i=0;
        n--;
    }
    

}
