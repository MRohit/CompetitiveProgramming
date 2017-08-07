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
        int cycle;
        cin>>cycle;
        int h=1;
        bool sum=true;
        while(cycle>=1){

            if(sum){
                h=h*2;
                sum=false;
            }else{
                h++;
                sum=true;
            }
            cycle--;
        }
        cout<<h<<endl;
        --t;
    }
    return 0;
}
