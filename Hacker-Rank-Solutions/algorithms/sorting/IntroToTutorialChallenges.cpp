#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,v;
    cin>>v>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        int c;
        cin>>c;
        if(v==c) {
            cout<<i;
            break;
        }

    }

    return 0;
}
