#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k;
    cin>>i>>j>>k;
    int days=0;
    for(int l=i;l<=j;++l){
        int q=l;
        int reverse=0;
        while(q!=0){
            reverse=reverse*10;
            reverse=reverse+q%10;
            q=q/10;
        }
        if(abs(reverse-l)%k==0)
            days++;
    }
    cout<<days;
    return 0;
}
