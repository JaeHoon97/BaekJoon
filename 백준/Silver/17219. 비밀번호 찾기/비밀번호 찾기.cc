#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;
    map<string, string> memo;
    string site, password, word;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> site >> password;
        memo[site] = password;
    }

    for (int i = 0; i < m; i++) {
        cin >> site;
        cout << memo[site] << '\n';
    }

    return 0;
}