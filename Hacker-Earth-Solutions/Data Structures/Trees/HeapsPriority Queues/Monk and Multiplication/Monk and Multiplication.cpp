#include <iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int n;
    long data,first=0,second=-1,third=-2;;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld", &data);
        if(data > third){
            if(data > second){
                if(data > first){
                    third=second;
                    second=first;
                    first = data;
                } else {
                    third=second;
                    second=data;
                }
            } else{
                third = data;
            }
        }
        if(i < 2)
            printf("-1\n");
        else
            printf("%ld\n",first*second*third);
    }
    

    
    
}