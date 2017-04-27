#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> st;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        st.insert(d);
    }
    cout<<st.size()-1;
    return 0;
}
