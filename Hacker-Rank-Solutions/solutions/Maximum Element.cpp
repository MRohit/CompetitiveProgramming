/*************************************************************************
	> File Name: Maximum Element.cpp
	> Author: Rohit Mourya
	> Blog: https://mouryarohit.blogspot.in/
	> Created Time: Mon April 24 2017
 ************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    
	int t,q,n;
    stack<int>st1;
    stack<int> auxSt;
    cin>>t;
    
	while(t>0) {
        cin>>q;
        if(q==1) {
            cin>>n;
			
			// Insert first element in both the stack
            if(st1.empty()) {
                st1.push(n);
                auxSt.push(n);
            } 
			// Insert greater element in auxSt by comparing current element and top element
			else {
                int n2 = auxSt.top();
                auxSt.push(max(n2,n));
                st1.push(n);
            }
        } 
		// pop element from both the stack
		else if (q==2) {
            if(!st1.empty()){
                st1.pop();
                auxSt.pop();
            }
        } else {
			// print the maximum element.
            cout<<auxSt.top()<<endl;
        }
        --t;
    }
    return 0;
    
}

/*
Input: t --> no of operations
q --> type of query: 1 for push, 2 for pop and 3 for printing max element

Sample Input:
10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3

Output:
26
91

*/
