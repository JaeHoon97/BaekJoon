#include <algorithm>
#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    deque<int> d;
    string command;
    int n, value;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push_front") {
            cin >> value;
            d.push_front(value);
        } else if (command == "push_back") {
            cin >> value;
            d.push_back(value);
        } else if (command == "pop_front") {
            if (d.size() == 0) {
                cout << -1 << '\n';
            } else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        } else if (command == "pop_back") {
            if (d.size() == 0) {
                cout << -1 << '\n';
            } else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        } else if (command == "size") {
            cout << d.size() << '\n';
        } else if (command == "empty") {
            cout << d.empty() << '\n';
        } else if (command == "front") {
            if (d.size() == 0) {
                cout << -1 << '\n';
            } else {
                cout << d.front() << '\n';
            }
        } else if (command == "back") {
            if (d.size() == 0) {
                cout << -1 << '\n';
            } else {
                cout << d.back() << '\n';
            }
        }
    }

    return 0;
}