// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
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

    if ((packageMin / 6) >= unitMin) {
        cout << N * unitMin << '\n';
        return 0;
    }

    int packageCount = 0;

    while (true) {
        if (packageCount * 6 >= N) {
            result = min(result, (packageCount * packageMin));
            break;
        }
        int unitCount = N - (packageCount * 6);
        result = min(result, (packageCount * packageMin) + (unitCount * unitMin));
        packageCount++;
    }

    cout << result << '\n';

    return 0;
}