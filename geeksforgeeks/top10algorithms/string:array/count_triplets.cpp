#include<iostream>
using namespace std;

int countTriplets (int arr[],int n,int sum) {
  sort(arr,arr+n);
  int ans=0;
  for(int i=0;i<n;i++) {
    int j=i+1,k=n-1;
    while(j < k) {
      if(arr[i] + arr[j] + arr[k] >= sum){
        k--;
        ans++;
      } else {
        cout<<"k-j:"<<k-j<<" ans:"<<ans;
        //ans = ans + (k-j);
        j++;
      }
    }

  }
  cout<<"\nAns::"<<ans<<endl;
  return ans;
}
int main() {
  int arr[] = {5, 1, 3, 4, 7};
  int sum = 12;
  int n = sizeof(arr)/sizeof(int);
  cout<<"\nTotal triplets:"<<countTriplets(arr,n,sum)<<endl;
  return 0;
}
