#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {

    int n,flag=0,len=0,number;
    char num[6];
    scanf("%d",&n);
    
    while(n>0){
        scanf("%d",&number);
        sprintf(num,"%d",number);
        len = strlen(num);
        flag=0;
        for(int i=0;i<len-1;i++){
            if(num[i] == '2' && num[i+1] == '1') {
                flag = 1;
                break;
            }
        }
        if(flag==0 && (number % 21) != 0)
            printf("The streak lives still in our heart!\n");
        else
            printf("The streak is broken!\n");
        
        n--;
    }
    return 0;
}
