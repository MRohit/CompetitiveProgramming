#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

string bracketBalanced (string s) {
        cin >> s;
        stack <char> st;
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];

            //cout<<i<<endl;

            switch (c) {
                case '(':
                case '[':
                case '{':
                    st.push(c);
                    break;
                case ')':
                    if(st.empty() || st.top() != '(')
                        return "NO\n";
                    else
                        st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top() != '{')
                        return "NO\n";
                    else
                        st.pop();
                    break;

                case ']':
                    if(st.empty() || st.top() != '[')
                        return "NO\n";
                    else
                        st.pop();
                    break;


            }

        }

        if(st.empty())
            return "YES\n";
        else
            return "NO\n";
}
int main(){
    int t;
    cin >> t;
    string s;
    for(int a0 = 0; a0 < t; a0++){

        cout << bracketBalanced (s);
    }
    return 0;
}
