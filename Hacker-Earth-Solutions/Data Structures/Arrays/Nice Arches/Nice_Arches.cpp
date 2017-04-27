#include <iostream>
#include<cstring>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	string str;
    cin>>n;
    stack<char> st;
    while(n > 0){
        cin>>str;
        stack<char> st;
        for(int j=0;j<str.length();j++){
            if(st.empty()){
                st.push(str[j]);
                continue;
            } 
            if(st.top() == str[j]) {
                st.pop();
            } else {
                st.push(str[j]);
                continue;
            }
        }
        if(st.empty())  count++;
        n--;
    }
    cout<<count;
	return 0;
}
