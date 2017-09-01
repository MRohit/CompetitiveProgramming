#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;++i){
        int no;
        cin>>no;
        a[no]=i;
    }
    for(int x=1;x<=n;++x){
        cout<<a[a[x]]<<endl;
    }
    return 0;
}
