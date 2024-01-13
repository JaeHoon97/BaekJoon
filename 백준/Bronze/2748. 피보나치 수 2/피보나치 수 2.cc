#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n >= 2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    } else {
        return n;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    long long f[91];
    f[0] = 0, f[1] = 1;

    cin >> n;

    for (int i = 2; i < 91; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    cout << f[n] << '\n';

    return 0;
}