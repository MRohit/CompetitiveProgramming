#include<iostream>
using namespace std;

int main() {
  int arr[] = {4,3,7,8,2,6,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i=1;i<n;i+=2) {
    if(i>0 && arr[i] < arr[i-1])
      swap(arr[i-1],arr[i]);
    if(i <n-1 && arr[i+1] > arr[i])
      swap(arr[i+1],arr[i]);

  }
  for(int i=0;i<n;++i) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
