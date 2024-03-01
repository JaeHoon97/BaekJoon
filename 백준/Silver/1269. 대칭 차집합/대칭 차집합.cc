#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    map<int, int> result;
    int n, m, key, count=0;

    cin >> n >> m;

    for (int i = 0; i < n + m; i++) {
        cin >> key;
        result[key]++;
    }

    for (auto pair : result) {
        if(pair.second == 1){
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}