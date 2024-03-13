#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v;
    int n, m, count = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (const auto& value : v) {
        if (binary_search(v.begin(), v.end(), m - value)) {
            count++;
        }
    }

    cout << count / 2  << '\n';

    return 0;
}
