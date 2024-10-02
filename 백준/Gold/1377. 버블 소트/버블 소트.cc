#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int>& left, const pair<int, int>& right) {
    return left.second < right.second;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, result = 0;

    cin >> N;

    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(make_pair(i, num));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++) {
        if (v[i].first - i > result) {
            result = v[i].first - i;
        }
    }

    cout << result + 1;

    return 0;
}