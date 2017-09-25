#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0) {
        double n,k,x,d;
        cin>>n>>k>>x>>d;
        vector<double> arr(n);
        double total=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            //double t = (double) (arr[i] * x /100.0f);

            total = total+ max(k,arr[i] * x /100.0f);
           // cout<<"x%arr[i]:"<<x%arr[i]<<"  total:"<<total<<endl;
        }
        //cout<<"total:"<<total<<endl;
        if(total > d) {
            cout<<"upfront"<<endl;
        }
        else{
            cout<<"fee"<<endl;
        }


        --t;
    }
    return 0;
}
