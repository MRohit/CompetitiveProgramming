#include <iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int n,m,age;
	cin>>n>>m;
	map<int,int> myMap;
	priority_queue<pair<int,int> > pq;
	for(int i=0;i<n;++i) {
	    cin>>age;
	    myMap[age]++;
	    pq.push(make_pair(myMap[age],age));
	    
	    cout<<pq.top().second <<" "<<pq.top().first<<endl;
	}
	return 0;
}
