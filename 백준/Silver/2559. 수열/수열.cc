#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, K, result = -10000010;
int arr[100005];
int psum[100005];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        psum[i] = psum[i - 1] + arr[i];
    }

    for (int i = K; i <= N; i++) {
        result = max(result, psum[i] - psum[i - K]);
    }

    cout << result << '\n';

    return 0;
}