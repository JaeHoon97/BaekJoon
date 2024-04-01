#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long N, count = 0;
    string word;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> word;

        stack<char> s;

        for (int i = 0; i < word.size(); i++) {
            if(s.empty()) {
                s.push(word[i]);
            } else {
                if(s.top() == word[i]) {
                    s.pop();
                } else {
                    s.push(word[i]);
                }
            }
        }
        
        if(s.empty()) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}
