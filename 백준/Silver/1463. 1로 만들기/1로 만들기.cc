// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;
    vector<int> DP(1000005, 0);

    cin >> N;

    for (int i = 2; i <= N; i++) {
        DP[i] = DP[i - 1] + 1;

        if (i % 2 == 0) {
            DP[i] = min(DP[i / 2] + 1, DP[i]);
        }

        if (i % 3 == 0) {
            DP[i] = min(DP[i / 3] + 1, DP[i]);
        }
    }

    cout << DP[N] << '\n';

    return 0;
}