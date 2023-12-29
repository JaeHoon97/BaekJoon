#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    while (true) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                cout << i << '\n';
                n = n / i;
                break;
            }
        }
        if (n == 1) {
            break;
        }
    }

    return 0;
}
