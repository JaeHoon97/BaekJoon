#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int A, B, N, result;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> A >> B >> N;

    for (int i = 0; i <= N; i++) {
        result = A / B;
        A = (A % B) * 10;
    }

    cout << result << '\n';

    return 0;
}