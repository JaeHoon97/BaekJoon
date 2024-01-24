#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, price, count = 0;  // 동전 종류의 수 n, 요구하는 가치의 합 price, 최소 동전의 수 count

    cin >> n >> price;

    int coin[n];  // 동전의 금액을 담는 배열 coin

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    for (int i = n - 1; 0 <= i; i--) { // 동전의 금액에서 가장 큰 값부터 비교하고, 몫을 구하기 위해 역방향으로 진행.
        if (coin[i] > price) { // 만약 코인의 가장 큰 값이 가치의 합보다 클 경우.
            continue; // 코인의 가장 큰 값을 줄이기 위해 다음 반복문 진행.
        } else { // 만약 코인의 가장 큰 값이 가치의 합보다 작거나 같을 경우.
            count += (price / coin[i]); // 가치의 합에서 현재 동전의 금액을 나누어 몫을 구하고 count에 추가.
            price %= coin[i]; // 몫을 구한만큼은 빼고 나머지만 남겨두고 다음 금액으로 진행.
        }
    }

    cout << count << endl;

    return 0;
}