#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    cin>>t;
    while(t>0) {
        cin>>n;
        int k=n,cnt=0;
        while(k!=0) {
            int r = k%10;
            k=(int) k/10;
            if(r>0 && n%r==0)
                cnt++;
        }
        cout<<cnt<<endl;
        --t;
    }
    return 0;
}
