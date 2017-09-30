#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compareNo(string i,string j){
    int ilen=i.length();
    int jlen=j.length();
    if(ilen==jlen)
        return i<j;
    return ilen<jlen;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;++i)
        cin>>arr[i];

    sort(arr.begin(),arr.end(),compareNo);
    for(int i=0;i<n;++i)
        cout<<arr[i]<<endl;

    return 0;
}
