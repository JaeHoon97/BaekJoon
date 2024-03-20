#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long x1, y1, x2, y2, A, B, temp;

    cin >> x1 >> y1 >> x2 >> y2;

    A = x1 * y2 + x2 * y1;
    B = y1 * y2;
    
    temp = A;
    
    A /= gcd(A, B);
    B /= gcd(temp, B);

    cout << A << ' ' << B << '\n';

    return 0;
}