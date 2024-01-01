#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v(5);
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    cout << sum / 5 << '\n';
    cout << v[2] << '\n';

    return 0;
}
