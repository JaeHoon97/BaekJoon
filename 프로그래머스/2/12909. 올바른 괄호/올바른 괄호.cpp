#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

stack<char> st;

bool solution(string s) {
    for (char ch : s) {
        if (ch == ')') {
            if(!st.empty()) {
                if(st.top() == '(') {
                    st.pop();
                } else {
                    st.push(ch);
                }
            } else {
                return false;
            }
        } else {
            st.push(ch);
        }
    }

    return !st.empty() ? false : true;
}