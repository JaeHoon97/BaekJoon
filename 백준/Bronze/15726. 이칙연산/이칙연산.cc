#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long A, B, C, result1, result2;

    cin >> A >> B >> C;

    result1 = (double)(A * B) / C;

    result2 = ((double)A / B) * C;

    result1 > result2 ? cout << result1 << endl : cout << result2 << endl;

    return 0;
}
