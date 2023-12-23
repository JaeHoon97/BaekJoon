#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int total, type, price, count, sum = 0;

    cin >> total;  // 총 금액
    cin >> type;   // 종류 수

    for (int i = 1; i <= type; i++) {
        cin >> price >> count;
        sum += price * count;
    }

    (sum == total) ? (cout << "Yes" << endl) : (cout << "No" << endl);

    return 0;
}
