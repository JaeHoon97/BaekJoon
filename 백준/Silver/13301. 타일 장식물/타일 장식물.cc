#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    long long tile[n];

    for (int i = 0; i < n; i++) {
        (i <= 1) ? tile[i] = 1 : tile[i] = tile[i - 1] + tile[i - 2];
    }

    if (n == 1) {
        cout << 4 << endl;
    } else if (n == 2) {
        cout << 6 << endl;
    } else {
        cout << (tile[n - 1] * 4) + (tile[n - 2] * 2) << endl;
    }

    return 0;
}