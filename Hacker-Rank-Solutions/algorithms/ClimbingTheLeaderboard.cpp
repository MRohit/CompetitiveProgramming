#include<stdlib.h>
#include<stack>
#include<iostream>
using namespace std;

int main(void){
   int n;
   cin>>n;
   stack<int> st;
   for(int i=0;i<n;++i){
       int no;
       cin>>no;
       if(st.empty() || st.top() != no) st.push(no);
   }
   cin>>n;
   for(int i=0;i<n;++i) {
       int no;
       cin>>no;
       while(!st.empty() && no >= st.top() ) st.pop();
        cout<<st.size() + 1<<endl;
   }
   return 0;
}
