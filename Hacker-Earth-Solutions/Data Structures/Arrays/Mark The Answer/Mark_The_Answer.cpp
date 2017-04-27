#include <iostream>
using namespace std;

int main()
{
    long t,n,max;
    long a[10000000];
    cin>>n>>max;
    long skip=0,cnt=0;
    
       // cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<=max && skip < 2) {
                cnt ++;
            } else{
                skip++;
            }
        }
        cout<<cnt<<endl;
        
      
    return 0;
}
