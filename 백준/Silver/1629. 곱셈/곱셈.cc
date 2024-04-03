#include <algorithm>
#include <iostream>
using namespace std;

long long A, B, C;

long long divide(long long A, long long B);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> A >> B >> C;

    cout << divide(A, B) % C << '\n';

    return 0;
}

long long divide(long long A, long long B) {
    if (B == 1) {  // 지수가 1일 때는 둘로 나눌 수 없으므로
        return A;
    }
    long long result = divide(A, B / 2);
    result = ((result % C) * (result % C)) % C;
    if (B % 2 == 1) {
        result = (result * A);
    }
    return result;
}