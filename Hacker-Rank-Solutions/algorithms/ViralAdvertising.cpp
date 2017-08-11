#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,cnt=0,floor=5,p=5;
    cin>>n;
    for(int i=1;i<=n;++i){
        cnt=cnt+floor/2;
        floor=(floor/2) *3;
    }
    cout<<cnt;
    return 0;
}
