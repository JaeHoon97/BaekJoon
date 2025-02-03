#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
long long DP[95];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    DP[1] = 1;
    DP[2] = 1;

    for (int i = 3; i <= 90; i++) {
        DP[i] = DP[i-1] + DP[i-2];
    }

    cout << DP[N] << '\n';

    return 0;
}