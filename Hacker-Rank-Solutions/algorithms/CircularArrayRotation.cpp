#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(n);
    int j=k%n;
    for(int i=0;i<n;++i){
        cin>>a[j];
        j=(j+1)%n;
    }
    while(q>0){
        int i;
        cin>>i;
        cout<<a[i]<<endl;
        --q;
    }
    return 0;
}
