#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m, count=0;
    set<string> str;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string key;
        cin >> key;
        str.insert(key);
    }

    for (int i = 0; i < m; i++) {
        string key;
        cin >> key;
        if( str.find(key) != str.end() ) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}