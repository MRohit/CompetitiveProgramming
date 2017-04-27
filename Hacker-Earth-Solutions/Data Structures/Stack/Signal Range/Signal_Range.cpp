#include <iostream>
#include<stdio.h>
#include <stack>
using namespace std;

void calculateSpan(int price[],int n){
    int S[n];
    S[0] = 1;
    printf("%d ",S[0]);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while (!st.empty() && price[st.top()] <= price[i])
         st.pop();
 
          // If stack becomes empty, then price[i] is greater than all elements
          // on left of it, i.e., price[0], price[1],..price[i-1].  Else price[i]
          // is greater than elements after top of stack
          S[i] = (st.empty())? (i + 1) : (i - st.top());
            printf("%d ",S[i]);
          // Push this element to stack
          st.push(i);
    }
    printf("\n");
}

int main(){
    int t,n;
    scanf("%d",&t);
    int arr[1000000];
    while(t>0){
        scanf("%d",&n);
        
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        calculateSpan(arr,n);
        
        t--;
    }
   
    return 0;
}