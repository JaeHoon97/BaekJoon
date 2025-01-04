#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int x, diff, sum = 0, k = 0;

    cin >> x;

    while (sum < x) {
        k++;
        sum += k;
    }

    diff = sum - x;

    if (k % 2 == 0) {
        cout << k-diff << '/' << 1+diff << '\n';
    } else {
        cout << 1+diff << '/' << k-diff << '\n';
    }

    return 0;
}