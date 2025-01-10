#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, result = 100000;
    int i = 0, j = 0;

    cin >> n;

    while (5 * i <= n) {
        int remain = n - (5 * i);
        if (remain % 2 == 0) {
            j = remain / 2;
            result = min(i + j, result);
        }
        i++;
    }

    (result != 100000) ? cout << result << '\n' : cout << -1 << '\n';   

    return 0;
}