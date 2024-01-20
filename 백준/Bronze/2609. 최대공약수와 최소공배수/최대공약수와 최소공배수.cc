#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int x, y, min, gcd = 1, lcm = 1;  // 두 수 x, y 최대공약수 gcd, 최소공배수 lcm

    cin >> x >> y;

    x <= y ? min = x : min = y;

    for (int i = 1; i <= min; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd *= i;
            x /= i;
            y /= i;
            i = 1;
        }
    }

    lcm = gcd * x * y;

    cout << gcd << endl << lcm << endl;

    return 0;
}
