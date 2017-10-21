#include <bits/stdc++.h>
using namespace std;

int main() {



int t;

cin>>t;


while(t--)
    {

   int a,b,c,sum;
   cin>>a>>b>>c;

   if(a>0 && b>0 && c>0 && a<=180 && b<=180 && c<=180 )
   {
       sum = a + b + c;
       if (sum == 180)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

    }



	return 0;
}
