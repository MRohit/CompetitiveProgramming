#include<iostream>
#include<vector>
using namespace std;

int prefixSum(vector<int> ar,int lastIndex,int n) {
  int sum = 0;
  for(int i=0;i<lastIndex;++i)
    sum = sum+ar[i];
  return sum;
}

int suffixSum(vector<int> ar,int startIndex,int n) {
  int sum = 0;
  for(int i=startIndex;i<n;++i)
    sum = sum + ar[i];
  return sum;
}
int main() {
  int t,n;
  cin>>t;

  while(t>0){
    cin>>n;
      vector<int> ar(n);
    for(int i=0;i<n;++i)
      cin>>ar[i];
    int minSum = 10000,minIndex;
    for(int i=0;i<n;++i) {
      int prefSum = prefixSum(ar,i+1,n);
      int suffSum = suffixSum(ar,n-i+1,n);
      if(prefSum+suffSum < minSum){
        minSum = prefSum+suffSum;
        minIndex = i+1;
      }
      cout<<minIndex<<endl;
    }
    --t;
  }

}
