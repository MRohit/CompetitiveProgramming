#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sd,sm,sy,ed,em,ey;
    cin>>sd>>sm>>sy>>ed>>em>>ey;
    if(sy <ey ) {
        cout<<"0";
    }else if(sy==ey) {
        if(sm < em) {
            cout<<"0";
        }else if(sm==em) {

            if(sd==ed || sd < ed){
                cout<<"0";
            }else{
                cout<<15*(abs(sd-ed));
            }
        }else{
            cout<<500*(abs(em-sm));
        }
    } else{
        cout<<"10000";
    }
    return 0;
}
