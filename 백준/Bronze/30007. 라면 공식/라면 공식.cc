#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long N, A, B, X;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A >> B >> X;
        cout << A * (X - 1) + B << '\n';
    }

    return 0;
}
