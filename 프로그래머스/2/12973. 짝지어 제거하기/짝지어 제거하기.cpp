#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<char> st;

int solution(string s) {
    int answer = -1;

    for(char ch : s) {
        if(st.empty()) {
            st.push(ch);
        } else {
            (st.top() == ch) ? st.pop() : st.push(ch);
        }
    }

    return st.empty() ? 1 : 0;
}