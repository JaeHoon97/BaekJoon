#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, M, result = 0;
    int arr[10005] = {0};
    int pSum[10005] = {0};

    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        arr[i] = num;
        pSum[i] = num + pSum[i - 1];
    }

    for (int i = 1; i <= N; i++) {
        int start = i;
        while (start <= N) {
            if (M == pSum[start] - pSum[start - i]) {
                result++;
            }
            start++;
        }
    }

    cout << result << '\n';

    return 0;
}