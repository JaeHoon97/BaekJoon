#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int number, max;

    vector<int> set(10, 0);

    cin >> number;

    while (number != 0) {
        set[number % 10]++;
        number /= 10;
    }

    if ((set[6] + set[9]) % 2 == 0) {
        int avg = (set[6] + set[9]) / 2;
        set[6] = avg;
        set[9] = avg;
    } else {
        int avg = (set[6] + set[9]) / 2 + 1;
        set[6] = avg;
        set[9] = avg;
    }

    max = *max_element(set.begin(), set.end());

    cout << max << endl;

    return 0;
}