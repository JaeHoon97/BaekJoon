#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, weight = -1;
    vector<int> v;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 1; i <= v.size(); i++) {
        weight = max(weight, v[i-1] * i);
    }

    cout << weight << '\n';

    return 0;
}