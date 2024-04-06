#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void go(const int& i);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testCase, a, b;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> a >> b;
        cout << lcm(a, b) << ' ' << gcd(a, b) << '\n';
    }

    return 0;
}
