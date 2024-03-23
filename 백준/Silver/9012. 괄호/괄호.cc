#include <algorithm>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        stack<string> s;
        string str, result = "YES";

        cin >> str;

        for (const auto& c : str) {
            if (c == '(') {
                s.push("#");
            } else {
                if (s.empty()) {
                    result = "NO";
                    break;
                }
                s.pop();
            }
        }

        if (!s.empty()) {
            result = "NO";
        }

        cout << result << '\n';
    }

    return 0;
}