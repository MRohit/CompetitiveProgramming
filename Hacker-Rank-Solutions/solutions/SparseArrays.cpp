#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;++i) {
        cin>>str[i];
    }
    int q;
    cin>>q;
    string st;
    while(q>0) {
        int cnt=0;
        cin>>st;
        for(int i=0;i<n;++i){
            if(st==str[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
        q--;
    }
    return 0;
}
