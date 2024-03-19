#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long a, b, size;
    string result = "";

    cin >> a >> b;

    size = gcd(a, b);

    for (int i = 0; i < size; i++) {
        result += "1";
    }

    cout << result << '\n';

    return 0;
}