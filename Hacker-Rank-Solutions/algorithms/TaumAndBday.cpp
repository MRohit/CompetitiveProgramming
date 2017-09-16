#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t,b,w,x,y,z;
    cin>>t;
    while(t>0) {
        cin>>b>>w;
        cin>>x>>y>>z;
        if(z > abs(x-y)){
            cout<<(x*b) + (y*w)<<endl;
        }else if(x <= y) {
            cout<<((b+w)*x) + (w*z)<<endl;
        }else{
            cout<<((b+w) *y) + (b*z)<<endl;
        }
   /*     if (Z >= abs(X-Y)) {
    printf("%ld\n", B*X + W*Y);
} else if (X <= Y) {
    printf("%ld\n", (B+W)*X + W*Z);
} else {
    printf("%ld\n", (B+W)*Y + B*Z);
}*/
        --t;
    }
    return 0;
}
