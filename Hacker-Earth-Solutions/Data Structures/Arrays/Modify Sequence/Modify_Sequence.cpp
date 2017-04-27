#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];   
    }
    int evenNumbers=0,oddNumbers=0;
    
    for(int i=0;i<n;i++){
        if(i%2==0)
            evenNumbers=evenNumbers+a[i];
        else
            oddNumbers=oddNumbers+a[i];        
    }
    if(evenNumbers == oddNumbers)
     cout<<"YES";
    else    cout<<"NO";
}

