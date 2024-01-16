#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j == n + i) {
                break;
            }
            (n - i < j) && (j < n + i) ? cout << '*' : cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}