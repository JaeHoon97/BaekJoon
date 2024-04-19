#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    while (true) {

        stack<string> s;
        string str;
        int count = 0;

        getline(cin, str);

        if (str.size() == 1 && str.front() == '.') {
            break;
        }

        for(const auto& c : str){
            if(c == '(') {
                s.push("small");
                count++;
            } else if(c == ')') {
                count--;
                if(!s.empty()&& s.top() == "small"){
                    s.pop();
                } else {
                    break;
                }
            } else if(c == '[') {
                s.push("big");
                count++;
            } else if(c == ']') {
                count--;
                if(!s.empty() && s.top() == "big"){
                    s.pop();
                } else {
                    break;
                }
            }
        }

        (s.empty() && count==0) ? cout << "yes" << '\n' : cout << "no" << '\n';  

    }
    

    return 0;
}