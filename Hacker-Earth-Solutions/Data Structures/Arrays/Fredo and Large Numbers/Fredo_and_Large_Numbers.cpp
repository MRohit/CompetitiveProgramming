#include <iostream>
using namespace std;

int main()
{
    long long a[1000000];
    long n,type,freq;
    cin>>n;
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    long q;
    cin>>q;
    long freq2 = 0;
    long long b[1000000];
    long long element=0;
    while(q>0) {
        cin>>type>>freq;
        element = 0;
        for(long i=0;i<n;i++){
            freq2=0;
            for(long j=0;j<n;j++) {
               if(a[i]==a[j]) {
                    freq2++;
                }
            }
            if(freq2 >= freq && type == 0) {
                element = a[i];
                break;
            }
            if(freq2 == freq && type==1) { 
                element = a[i];
                break;
            }
        }
        
        cout<<element<<endl;
        q--;
    }
    return 0;
}

