#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t>0){
        int no,k;
        cin>>no>>k;

        int st=0;
        for(int i=0;i<no;++i){
            int co;
            cin>>co;
            if(co<=0)
                st++;
        }
        if(st<k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        --t;
    }
    return 0;
}
