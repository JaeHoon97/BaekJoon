#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, K, A = 1, B = 1;

    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        A *= (N--);
    }
    for (int i = 1; i <= K; i++) {
        B *= i;
    }

    cout << A / B << endl;

    return 0;
}
