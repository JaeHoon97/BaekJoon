#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;
    vector<int> DP(1005, 0);

    cin >> N;

    DP[1] = 1, DP[2] = 2;

    for (int i = 3; i <= N; i++) {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
    }

    cout << DP[N] << '\n';

    return 0;
}