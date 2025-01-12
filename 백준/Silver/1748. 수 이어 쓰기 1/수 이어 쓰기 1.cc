#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, sum = 0, power = 1;

    cin >> N;

    while (true) {
        if (N < pow(10, power) - 1) {
            sum += ((N - pow(10, power - 1)) + 1) * power;
            break;
        }
        sum += ((pow(10, power) - 1) - pow(10, power - 1) + 1) * power;
        power++;
    }

    cout << sum << '\n';

    return 0;
}