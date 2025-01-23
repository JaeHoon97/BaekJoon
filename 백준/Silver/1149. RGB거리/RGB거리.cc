#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, R, G, B;
int arr[1005][3], DP[1005][3];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N; // 집의 수

    for (int i = 1; i <= N; i++) {
        cin >> R >> G >> B; // 빨강, 초록, 파랑 칠하는 비용 입력
        arr[i][0] = R, arr[i][1] = G, arr[i][2] = B; // 색상마다 칠하는 비용을 해당 집 배열에 저장
    }

    DP[1][0] = arr[1][0], DP[1][1] = arr[1][1], DP[1][2] = arr[1][2]; // 첫 번째 집을 칠하는 색상에 따른 누적 비용은 같음  

    for (int i = 2; i <= N; i++) {
        DP[i][0] = arr[i][0] + min(DP[i - 1][1], DP[i - 1][2]); // 빨강을 칠하고 싶을 때, 초록과 파랑의 누적된 비용 중 최소를 선택
        DP[i][1] = arr[i][1] + min(DP[i - 1][0], DP[i - 1][2]); // 초록을 칠하고 싶을 때, 빨강과 파랑의 누적된 비용 중 최소를 선택
        DP[i][2] = arr[i][2] + min(DP[i - 1][0], DP[i - 1][1]); // 파랑을 칠하고 싶을 때, 빨강과 초록의 누적된 비용 중 최소를 선택
    }

    cout << min(DP[N][0], min(DP[N][1], DP[N][2])) << '\n';

    return 0;
}
