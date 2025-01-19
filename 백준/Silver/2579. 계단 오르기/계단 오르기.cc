#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, num;
int arr[305], dp[305];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> num;
        arr[i] = num;
    }

    dp[0] = arr[0];
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for (int i = 3; i <= N; i++) {
        dp[i] = max(arr[i] + arr[i-1] + dp[i-3], arr[i] + dp[i-2]);
    }

    cout << dp[N] << '\n';

    return 0;
}