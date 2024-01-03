#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;

    cin >> n;

    m = 2 * n - 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (i <= n) {
                if (j < n - i + 1) {
                    cout << " ";
                } else if (n - i + 1 <= j && j <= n + i - 1) {
                    cout << '*';
                }
            } else {
                if (j < i - n + 1) {
                    cout << " ";
                } else if (i - n + 1 <= j && j <= n - i + m) {
                    cout << '*';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
