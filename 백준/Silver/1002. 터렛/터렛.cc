#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int T;
    double x1, y1, x2, y2, x3, y3, r1, r2;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2; // 두 원의 정보 입력

        // 중심 간 거리 계산
        double d = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

        // 교점 개수 판단
        if (d == 0 && r1 == r2) {
            // 두 원이 동일
            cout << -1 << '\n';
        } else if (d == r1 + r2 || d == abs(r1 - r2)) {
            // 외접 또는 내접
            cout << 1 << '\n';
        } else if (abs(r1 - r2) < d && d < r1 + r2) {
            // 두 점에서 교차
            cout << 2 << '\n';
        } else {
            // 교점 없음
            cout << 0 << '\n';
        }
    }

    return 0;
}