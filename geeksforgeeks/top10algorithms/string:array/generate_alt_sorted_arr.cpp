// Generate all possible sorted arrays from alternate elements of two given sorted arrays
#include<iostream>
using namespace std;

void printPossibleArray(int c[],int n){
  for(int i=0;i<n;i++)
    cout<<c[i]<<" ";
  cout<<endl;
}
void combineTwoArray (int a[],int b[],int c[],int i,int j,int na,int nb,int len,bool flag) {
  //cout<<"\nc[Len]::"<<c[len]<<endl;
  // if flag is true then include it from A array
  if(flag) {
    // C array has any elements, then print it
    if(len) {
      printPossibleArray(c,len+1);
    }
    // for very first element

    for(int k=i;k < na;k++) {

      if(!len) {
        c[len] = a[k];
        // pass !flag to include next element from B array
        combineTwoArray(a,b,c,k+1,j,na,nb,len,!flag);
      } else {
        if (a[k] > c[len]) {
          c[len+1] = a[k];
          combineTwoArray(a,b,c,k+1,j,na,nb,len+1,!flag);
        }
      }

    }
  }else {
    // else from b array
    for(int r=j;r < nb;r++) {
      if(b[r] > c[len]) {
        c[len+1] = b[r];
        combineTwoArray(a,b,c,i,r+1,na,nb,len+1,!flag);
      }
    }

  }
}
void getAlternateSortedArray(int a[],int b[],int na,int nb) {
  int c[na+nb];
  cout<<"\n C size:"<<sizeof(c)<<endl;
  combineTwoArray(a,b,c,0,0,na,nb,0,true);
}

int main(){
  int a[] = {10,15,25};
  int b[] = {5,20,30};
  int na = sizeof(a)/sizeof(a[0]);
  int nb = sizeof(b)/sizeof(b[0]);
  getAlternateSortedArray(a,b,na,nb);
  //generate(a,b,na,nb);
  return 0;
}
