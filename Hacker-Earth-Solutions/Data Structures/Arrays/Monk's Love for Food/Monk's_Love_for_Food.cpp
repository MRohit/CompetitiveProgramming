#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	long q,c;
	int data;
	cin>>q;
	stack<int> st;
	while(q>0){
	    cin>>c;
	    if(c == 2){
	        cin>>data;
	        st.push(data);
	    } else {
	        if(st.empty()){
	            cout<<"No Food\n";
	        } else {
	            cout<<st.top()<<"\n";
	            st.pop();
	        }
	    }
	    q--;
	}
	return 0;
}
