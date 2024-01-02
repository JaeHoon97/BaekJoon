#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;  // 카드의 개수 n개, 딜러가 정한 숫자 m

    cin >> n >> m;

    vector<int> arr(n);  // 입력한 카드의 수를 저장하기 위한 배열

    for (int i = 0; i < n; i++) {  // 카드 수 입력
        cin >> arr[i];
    }

    // 3장의 합이 sum이 m을 넘지 않으면서 m과 같으면 됨
    // sum <= m
    int max = 10;

    for (int i = 0; i <= (n - 3); i++) {
        for (int j = i + 1; j <= (n - 3 + 1); j++) {
            for (int k = j + 1; k <= (n - 3 + 2); k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (max <= sum && sum <= m) {
                    max = sum;
                }
            }
        }
    }

    cout << max << '\n';

    return 0;
}
