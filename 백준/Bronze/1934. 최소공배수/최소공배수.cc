#include <algorithm>
#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    long long r = a % b;

    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int T, A, B;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;

        if (A > B) {
            cout << (A * B) / gcd(A, B) << '\n';
        } else {
            cout << (A * B) / gcd(B, A) << '\n';
        }
    }

    return 0;
}
