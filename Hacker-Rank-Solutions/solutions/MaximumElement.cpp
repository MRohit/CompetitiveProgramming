#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,q,n;
    stack<int>st1;
    stack<int> st2;
    cin>>t;
    while(t>0) {
        cin>>q;
        if(q==1) {
            cin>>n;
            if(st1.empty()) {
                st1.push(n);
                st2.push(n);
            } else {
                int n2 = st2.top();
                st2.push(max(n2,n));
                st1.push(n);
            }
        } else if (q==2) {
            if(!st1.empty()){
                st1.pop();
                st2.pop();
            }
        } else {
            cout<<st2.top()<<endl;
        }
        --t;
    }
    return 0;
    
}
