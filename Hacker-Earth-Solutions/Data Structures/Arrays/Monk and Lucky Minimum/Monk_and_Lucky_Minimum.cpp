#include <iostream>
using namespace std;
#define MAX 1000000
int main()
{
    long t,n;
    cin>>t;
    
    long a[MAX];
    while(t>0) {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long freq=0,small=9999999999;
        for(int i=0;i<n;i++){
            
            if(a[i] < small) {
                small=a[i];
                freq=0;
            }
            if(small == a[i])
                freq++;
        }
        
       // cout << "Small:"<<small<<"Frequency: "<<freq;
        if(freq%2==0)   cout<<"Unlucky\n";
        else    cout<<"Lucky\n";
        t--;
    }
    return 0;
}
