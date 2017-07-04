#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Time Complexity: O(n+r) Space Complexity: O(1)
    long int n,r;
    cin>>n>>r;
    vector<long int> vec(n);
    
    int j = n;
    // get the position of starting index after r left rotations.
    for(int i=0;i<n;++i)
        cin>>vec[i];
    // print the array
    
    int i=r%n;
    for(int counter = 0;counter<n;++counter){ 
        cout<<vec[i]<<" ";
        i=(i+1)%n;
    }
    return 0;
    
}