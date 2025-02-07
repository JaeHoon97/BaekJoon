#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
bool arr[246915];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    arr[0] = arr[1] = true;

    for (int i = 2; i < 246915; i++) {
        if (arr[i] == true) {  // true면 소수가 아님
            continue;          // 건너뛰기
        }
        for (int j = i * 2; j < 246915; j += i) {
            arr[j] = true;
        }
    }

    while (true) {
        int cnt = 0;

        cin >> N;

        if (N == 0) {
            break;
        }

        for (int i = N + 1; i <= 2 * N; i++) {
            if (!arr[i]) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}