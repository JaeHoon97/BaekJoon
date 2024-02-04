#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, value;
    queue<int> q;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        if (input == "push") {
            cin >> value;
            q.push(value);
        }
        if (input == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            } else {
                cout << -1 << '\n';
            }
        }
        if (input == "size") {
            cout << q.size() << '\n';
        }
        if (input == "empty") {
            q.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
        }
        if (input == "front") {
            q.empty() ? cout << -1 << '\n' : cout << q.front() << '\n';
        }
        if (input == "back") {
            q.empty() ? cout << -1 << '\n' : cout << q.back() << '\n';
        }
    }

    return 0;
}