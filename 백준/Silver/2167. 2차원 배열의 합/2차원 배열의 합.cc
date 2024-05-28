#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M, K, X1, X2, Y1, Y2;
int arr[305][305];
long long getSum(int y1, int x1, int y2, int x2);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int y = 1; y <= N; y++) {
        for (int x = 1; x <= M; x++) {
            cin >> arr[y][x];
        }
    }

    cin >> K;

    for (int i = 0; i < K; i++) {
        long long sum = 0;

        cin >> Y1 >> X1 >> Y2 >> X2;

        sum = getSum(Y1, X1, Y2, X2);
        
        cout << sum << '\n';
    }

    return 0;
}

long long getSum(int y1, int x1, int y2, int x2) {
    long long sum = 0;

    for (int i = y1; i <= y2; i++) {
        for (int j = x1; j <= x2; j++) {
            sum += arr[i][j];
        }
    }

    return sum;
}
