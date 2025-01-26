#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int testCase, k, n;
int APT[15][15];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> testCase;

    for (int i = 1; i <= 14; i++) {
        APT[0][i] = i;  // 0층의 i호는 i명이 거주
        APT[i][1] = 1;
    }

    for (int i = 1; i <= 14; i++) {
        for (int j = 2; j <= 14; j++) {
            APT[i][j] = APT[i][j-1] + APT[i-1][j];
        }
    }

    for (int i = 0; i < testCase; i++) {
        cin >> k >> n;
        cout << APT[k][n] << '\n';
    }

    return 0;
}