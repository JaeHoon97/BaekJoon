#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v1, v2;
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    sort(v1.begin(), v1.end(), greater<int>());

    for (int i = 0; i < N; i++) {
        v1[i] += (i + 2);
    }

    cout << *max_element(v1.begin(), v1.end()) << '\n';

    return 0;
}