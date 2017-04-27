#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	long n;
	long long int a[10000000];
    cin>>n;
    stack<long> st1;
    for(int i=1;i<=n;i++){
        cin>>a[i];       
    }
    for(long i=1;i<=n;i++){
        int xl = -1;
        int yl = -1;
        for(long x=1;x<i;x++){
            
            if(a[x] > a[i] && xl < x){
                xl = x;
            }
        }
        for(long y=i+1;y<=n;y++){
            
            if(a[y] > a[i] && yl < y){
                yl = y;
                break;
            }else
                yl=-1;
        }
        cout<<xl+yl<<" ";
        
    }
	return 0;
}
