#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long sum, currentSum = 0, value = 0;

    cin >> sum;

    while (sum >= currentSum) {
        currentSum += (++value);
    }

    (sum == 1) ? cout << 1 << '\n' : cout << value - 1 << '\n';

    return 0;
}