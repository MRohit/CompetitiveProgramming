#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

int getMaxArea(int hist[], int n)
{
    // Create an empty stack. The stack holds indexes of hist[] array
    // The bars stored in stack are always in increasing order of their
    // heights.
    stack<int> s;
 
    int max_area = 0; // Initalize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar as the smallest bar
 
    // Run through all bars of given histogram
    int i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top stack, push it to stack
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
 
        // If this bar is lower than top of stack, then calculate area of rectangle 
        // with stack top as the smallest (or minimum height) bar. 'i' is 
        // 'right index' for the top and element before top in stack is 'left index'
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
 
            // Calculate the area with hist[tp] stack as smallest bar
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
 
    // Now pop the remaining bars from stack and calculate area with every
    // popped bar as the smallest bar
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
 
    return max_area;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int  v[1000000];
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>v[i];
    
    // Create a empty stack to store indexs for v.
    stack<int> st;
    
    int max=0;  // to store max area
    int top;    // to store top element of stack
    int area_with_top;   // to store area with top bar as the smallest bar
    
    int i=0;    // run through all bars given in histogram
    while(i < n) {
        // if current bar is higher than top of stack then push it on stack
        // and move to next bar
        if(st.empty() || v[st.top()] <= v[i]) {
            st.push(i++);
            //++i;
        }else {
            top = st.top(); // store the top index
            //pop the top
            st.pop();
            //area_with_top = v[top] * (st.empty() ? i : i - st.top() - 1);
            
            if(st.empty()) {
                area_with_top = v[top] * i;
                
            }else
                area_with_top = v[top] * (i-st.top() - 1);
            
            // update max area if needed
            if(max < area_with_top)
                max = area_with_top;
        }
        
    }
    
    // Now pop the remaining bars from stack and calculate area
    // with every  popped bar as smallest bar
    while(st.empty() == false) {
        top = st.top();
        st.pop();
        ///area_with_top = v[top] * (st.empty() ? i : i - st.top() - 1);
        if(st.empty()) 
            area_with_top = v[top] * i;
        else
            area_with_top = v[top] * (i-st.top()-1);
        
        if(max < area_with_top)
            max = area_with_top;
    }
    cout<<max<<endl;
    return 0;
}
