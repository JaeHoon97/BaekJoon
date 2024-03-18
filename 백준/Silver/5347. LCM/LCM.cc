#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    unsigned long long T, A, B;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;

        if (A > B) {
            cout << lcm(A, B) << '\n';
        } else {
            cout << lcm(B, A) << '\n';
        }
    }

    return 0;
}