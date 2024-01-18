#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(const pair<string, int>& left, const pair<string, int>& right) { return left.second > right.second; }

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testCase, schoolCount;  // 테스트 케이스, 학교 수

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> schoolCount;

        vector<pair<string, int>> v(schoolCount);

        for (int j = 0; j < schoolCount; j++) {
            cin >> v[j].first >> v[j].second;
        }

        sort(v.begin(), v.end(), compare);

        cout << v[0].first << '\n';
    }

    return 0;
}