#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, result;
int arr[505][505];
int DP[505][505];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    DP[0][0] = arr[0][0];
    result = arr[0][0];

    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                DP[i][j] = arr[i][j] + DP[i - 1][j];
            } else if (i == j) {
                DP[i][j] = arr[i][j] + DP[i - 1][j - 1];
            } else {
                DP[i][j] = arr[i][j] + max(DP[i - 1][j - 1], DP[i - 1][j]);
            }
            result = max(result, DP[i][j]);
        }
    }

    cout << result << '\n';

    return 0;
}
