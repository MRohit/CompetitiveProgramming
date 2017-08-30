#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,m,s;
    cin>>t;
    while(t>0) {
        cin>>n>>m>>s;
        if((s+m-1)%n == 0)
            cout<<n<<endl;
        else
            cout<<(s+m-1)%n<<endl;
        --t;
    }
    return 0;
}
