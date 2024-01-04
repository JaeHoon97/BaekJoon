#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair< pair<int, string>, int> left, const pair<pair<int, string>, int> right) {
    if (left.first.first == right.first.first) {
        return left.second < right.second;
    } else {
        return left.first.first < right.first.first;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<pair<pair<int, string>, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int age;
        string name;

        cin >> age >> name;

        v.push_back({{age, name}, i});
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].first.first << " " << v[i].first.second << '\n';
    }

    return 0;
}