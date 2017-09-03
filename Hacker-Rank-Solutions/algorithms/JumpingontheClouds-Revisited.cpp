#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int j=0,e=100;
    do{
       j=(j+k)%n;
       if(a[j]==1)
           e=e-3;
       else
           e=e-1;
    }while(j!=0);
    cout<<e;
    return 0;
}
