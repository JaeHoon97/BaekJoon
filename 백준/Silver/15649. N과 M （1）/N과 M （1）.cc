#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, M, index = 0;
    vector<int> v;
    set<vector<int>> s;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        v.push_back(i);
    }

    do {
        vector<int> v2;
        for (int i = 0; i < M; i++) {
            v2.push_back(v[i]);
        }
        s.insert(v2);

    } while (next_permutation(v.begin(), v.end()));

    for (auto it = s.begin(); it != s.end(); it++) {
        for (auto num : *it) {
            cout << num << ' ';
        }
        cout << '\n';
    }

    return 0;
}
