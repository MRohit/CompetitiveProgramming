#include<iostream>
using namespace std;

bool pythagorianTriplet (int arr[],int n) {
  for(int i=0;i<n;++i)
    arr[i] = arr[i] * arr[i];
  sort(arr,arr+n);
  for(int i=n-1;i>=2;--i) {
    int j=0,k=n-1;
    while(j<k) {
      //cout<<"arr[j]:"<<arr[j]<<" arr[k]:"<<arr[k]<<" arr[i]:"<<arr[i]<<endl;
      if(arr[j]+arr[k] == arr[i])
        return true;
      arr[j] + arr[k] > arr[i] ? k--:j++;
    }
  }
  return false;
}
int main() {
  int arr[] = {3,1,4,6,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"\nIs pythagorian triplet exists:"<<pythagorianTriplet(arr,n)<<endl;
  return 0;
}
