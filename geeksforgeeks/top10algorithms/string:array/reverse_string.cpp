// Reverse an array without affecting special characters
// Time Complexity:  O(n)
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;


bool isChar (char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    //return true;

}
int main() {
  char str[] = "a!!!b.c.d,e'f,ghi";
  int l=0,r=strlen(str) - 1;

  while(l < r) {
    if(!isChar(str[l])) {
      l++;
    }else if(!isChar(str[r])){
      r--;
    }else {
      swap(str[l],str[r]);
      l++;
      r--;
    }
  }

  cout<<"\nAfter reversing string:"<<str<<endl;
  return 0;
}
