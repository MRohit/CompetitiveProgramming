#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int myfunction(int a,int b){
    return a>b?a:b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,r,a,b,v;
    cin>>n>>r;
    vector<int> vec(n+1,0);
    
    while(r > 0) {
        cin>>a>>b>>v;
        vec[a-1] +=v;
            if(b<n){
                vec[b] -=v; 
            }
        r--;
    }
    long big = 0;
    long sum = 0;
    for(int arr_i = 0; arr_i<n; arr_i++){

        sum = sum+vec[arr_i];

        if(big < sum){
            big = sum;
        }

    }
    cout<<big<<endl;
    return 0;
    
}
