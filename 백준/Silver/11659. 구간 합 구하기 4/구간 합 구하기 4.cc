#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
long long  arr[100001], pSum[100001];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long N, M, first, second;

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        pSum[i] = pSum[i-1] + arr[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> first >> second;
        cout << pSum[second] - pSum[first-1] << '\n';
    }

    return 0;
}