#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int cookiePrice, cookieCount, currentMoney, pay;

    cin >> cookiePrice >> cookieCount >> currentMoney;

    pay = cookiePrice * cookieCount;

    if (pay > currentMoney) {
        cout << pay - currentMoney << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}