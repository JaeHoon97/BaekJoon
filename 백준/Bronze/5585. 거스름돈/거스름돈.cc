#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int money = 1000, price, change;  // 가지고 있는 금액, 지불할 금액, 잔돈
    int count = 0;

    cin >> price;

    change = money - price;

    count += change / 500;
    change %= 500;

    count += change / 100;
    change %= 100;

    count += change / 50;
    change %= 50;

    count += change / 10;
    change %= 10;

    count += change / 5;
    change %= 5;

    count += change / 1;
    change %= 1;

    cout << count << endl;

    return 0;
}
