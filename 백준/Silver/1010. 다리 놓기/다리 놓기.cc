#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testCase;  // 테스트 케이스 testCase

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        long long result = 1;
        int n, r;  // 전체 n개 중에 r개를 택한다.
        cin >> r >> n;
        int k = 1;
        for (int j = n; j > n - r; j--) {
            result *= j;
            result /= k;
            k++;
        }

        cout << result << '\n';
    }

    return 0;
}