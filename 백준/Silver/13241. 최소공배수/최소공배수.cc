#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

long long gcd(int a, int b) {
    long long r = a % b;

    while(r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
    
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long a, b, lcm;

    cin >> a >> b;

    lcm = a * b / gcd(a, b);

    cout << lcm << endl;

    return 0;
}