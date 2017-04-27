#include <iostream>
#include<queue>
using namespace std;
#include <stdio.h>

int main()
{
    long n,i,cnt=0;
    scanf("%ld",&n);
    int data;
    queue<int> q;
    for(i=0;i<n;i++){
        scanf("%d",&data);
        q.push(data);
    }
    for(i=0;i<n;i++){
        scanf("%d",&data);
        
        if(data == q.front()){
            q.pop();
            cnt++;
        } else {
            while(q.front() != data){
                int data = q.front();
                q.pop();
                q.push(data);
                cnt++;
            }
            q.pop();
            cnt++;
        }
    }
    
    printf("%d",cnt);
    return 0;
}


