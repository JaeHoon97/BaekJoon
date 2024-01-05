#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> left, const pair<int, int> right) { return left.first < right.first; }

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, cnt = 0;  // 관찰 횟수, 소의 위치 변경 횟수
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n - 1; i++) {
        if (v[i].first == v[i + 1].first) {
            if (v[i].second != v[i + 1].second) {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}
