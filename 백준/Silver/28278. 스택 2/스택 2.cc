#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    stack<int> s;
    int n, command, value;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;
        
        switch (command) {
            case 1:
                cin >> value;
                s.push(value);
                break;
            case 2:
                if(!s.empty()) {
                    cout << s.top() << '\n';
                    s.pop();
                } else {
                    cout << -1 << '\n';
                }
                break;
            case 3:
                cout << s.size() << '\n';
                break;
            case 4:
                s.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
                break;
            case 5:
                !s.empty() ? cout << s.top() << '\n' : cout << -1 << '\n';
                break;
            default:
                break;
        }
    }

    return 0;
}
