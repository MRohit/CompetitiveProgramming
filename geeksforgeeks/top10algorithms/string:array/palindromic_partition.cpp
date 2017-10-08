#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;


bool isPalindrome (string str,int l,int r) {
  while(l<r) {
    if(str[l] != str[r])
      return false;
    l++;
    r--;
  }
  return true;

}
void palindromePartitionsUtility (vector<vector<string> > &allPartitions, vector<string> &curPart,string str,int start,int end) {
  if(start >= end) {
    allPartitions.push_back(curPart);
    return;
  }
  for(int i=start;i<end;i++) {
    if(isPalindrome(str,0,i)) {
      curPart.push_back(str.substr(start,i-start+1));
      palindromePartitionsUtility(allPartitions,curPart,str,i+1,end);
      curPart.pop_back();
    }
  }
}
void palindromePartitions (string str) {
  vector<string> curPart;
  vector<vector<string> > allPartitions;
  palindromePartitionsUtility(allPartitions,curPart,str,0,str.length());
  for (int i=0; i< allPartitions.size(); i++ )
    {
        for (int j=0; j<allPartitions[i].size(); j++)
            cout << allPartitions[i][j] << " ";
        cout << "\n";
    }
}
int main() {
  string str = "nitin";
  cout<<"\nAll Partitions\n";
  palindromePartitions(str);
  return 0;
}
