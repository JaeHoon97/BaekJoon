#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;
    string name;
    set<string> arr1, arr2, result;

    cin >> n >> m;

    for (int i = 0; i < n + m; i++) {
        cin >> name;
        if (i < n) {
            arr1.insert(name);
        } else {
            arr2.insert(name);
        }
    }

    for (auto it = arr1.begin(); it != arr1.end(); it++) {
        if (arr2.find(*it) != arr2.end()) {
            result.insert(*it);
        };
    }

    cout << result.size() << '\n';

    for (auto it = result.begin(); it != result.end(); it++) {
        cout << *it << '\n';
    }

    return 0;
}