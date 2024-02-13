#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    set<string, greater<string>> employees;
    string name, log;
    int count;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> name >> log;
        if (log == "enter") {
            employees.insert(name);
        } else {
            employees.erase(name);
        }
    }

    for (auto it = employees.begin(); it != employees.end(); it++) {
        cout << *it << '\n';
    }

    return 0;
}
