#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> burger, beverage;

    for (int i = 0; i < 5; i++) {
        int price;
        cin >> price;
        (i < 3) ? burger.push(price) : beverage.push(price);
    }

    cout << burger.top() + beverage.top() - 50 << endl;

    return 0;
}