#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n, result = 0;

    cin >> n;

    for (int i = 1; i * i <= n; i++) {
        result++;
    }

    cout << result << '\n';

    return 0;
}