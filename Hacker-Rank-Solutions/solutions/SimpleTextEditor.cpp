#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
#include<string.h>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,s2;
    int q;
    int t,n,len;
    cin>>t;
    stack<string> st;
    while(t>0) {
        cin>>q;
        
        switch(q) {
            case 1:
                
                cin>>s2;
                st.push(s);
                s = s+s2;
                
                //cout<<"\nCase 1 After concant:"<<s<<endl;
                // append
                break;
            case 2:
                int k;
                cin>>k;
                st.push(s);
                len = s.length();
                s.erase(s.size()-k);
                
               // cout<<"Case 2 After "<<k<<"char deletes:"<<s<<endl;
                /*while(len != k){
                    s.pop_back();
                    len--;
                }*/
                // delete k characters
                break;
            case 3:
                cin>>k;
              //  cout<<"Case 3 String:"<<s<<"  Kth:"<< k <<" "<<s[k-1]<<endl;
                cout<<s[k-1]<<endl;
                // print kth character
                break;
            case 4:
                if(!st.empty()) {
                    
                    s = st.top();
                    //cout<<"Case 4 Undo:"<<s<<endl;
                    st.pop();
                }
                // undo 1st or 2nd (last) operation
                break;
        }
        --t;
    }
    return 0;
}
