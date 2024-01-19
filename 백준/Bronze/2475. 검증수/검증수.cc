#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int number, sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> number;
        sum += pow(number, 2);
    }

    cout << sum % 10 << endl;
    return 0;
}