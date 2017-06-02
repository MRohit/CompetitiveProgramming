#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int Max(int a,int b,int c){
    int max;
    max=a>b?a:b;
    max=max>c?max:c;
    return max;       
}


int main(){
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int s1=0,s2=0,s3=0;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
       s1+=h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
       s2+=h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
       s3+=h3[h3_i];
    }
    int p1=0,p2=0,p3=0,max=0;
    //cout<<s1<<" "<<s2<<" "<<s3<<endl;
    while (s1!=s2 || s2 != s3) {
        max = Max(s1,s2,s3);
        if(max==s1) {
            s1-=h1[p1];
            p1++;
            if(p1==n1) {
                cout<<"0"<<endl;
                return 0;
            }
            
        }else if(max==s2) {
            s2-=h2[p2];
            p2++;
            if(p2==n2) {
                cout<<"0"<<endl;
                return 0;
            }
        }else if(max==s3){
            s3-=h3[p3];
            p3++;
            if(p3==n3) {
                cout<<"0"<<endl;
                return 0;
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}
