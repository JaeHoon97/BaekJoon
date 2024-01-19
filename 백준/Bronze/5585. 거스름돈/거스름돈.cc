#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int price, change;  // 지불할 금액, 잔돈
    int count = 0; // 잔돈의 수
    int jpy[6] = {500, 100, 50, 10, 5, 1};

    cin >> price;

    change = 1000 - price;

    for (int i = 0; i < 6; i++) {
        count += change / jpy[i];
        change %= jpy[i];
    }

    cout << count << endl;

    return 0;
}
