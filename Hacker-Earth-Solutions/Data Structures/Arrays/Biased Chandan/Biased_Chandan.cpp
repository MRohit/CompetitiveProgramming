#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int t,sum = 0,a;
	//long sum = 0;
	stack<int> st;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&a);
	    st.push(a);
	    if(a==0 && st.size() != 1){
	        st.pop();
	        st.pop();
	    }
	    //if(a==0)    count++;
	}

	while(!st.empty()){
	    sum = sum + st.top();
	    st.pop();
	}
	printf("%d",sum);
    return 0;
}
