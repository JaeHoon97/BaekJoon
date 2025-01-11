#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, M, packageMin = 2000, unitMin = 2000, result = 100000;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int packagePrice, unitPrice;
        cin >> packagePrice >> unitPrice;
        packageMin = min(packageMin, packagePrice);
        unitMin = min(unitMin, unitPrice);
    }

    // 단품으로 구매
    int onlyUnit = N * unitMin;

    // 단품 + 패키지로 구매
    int packageAndUnit = (N / 6) * packageMin + (N % 6) * unitMin; 

    // 패키지로 구매
    int onlyPackage = (N % 6 == 0) ? (N / 6 * packageMin) : (((N / 6 + 1) * packageMin));

    result = min(onlyUnit, min(packageAndUnit, onlyPackage));

    cout << result << '\n';

    return 0;
}