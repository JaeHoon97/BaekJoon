#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(0);

    long long sum = 0;
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    cout << sum << '\n';
    cout << pow(sum, 2) << '\n';

    sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += pow(i, 3);
    }

    cout << sum << '\n';

    return 0;
}