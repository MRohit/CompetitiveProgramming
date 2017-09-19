#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> a(n);
    cin>>n;
    int c;
    for(int i=0;i<n;++i){

        cin>>c;
        a[i]=c;
    }
    int min=1000;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]==a[j]){
                int dif=abs(i-j);
                if(min>dif)
                    min=dif;
            }
        }
    }
    if(min==1000)
        cout<<"-1";
    else
        cout<<min;
    return 0;
}
