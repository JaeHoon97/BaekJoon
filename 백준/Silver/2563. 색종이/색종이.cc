#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int arr[100][100] = {0};    // 10 X 10 사이즈의 흰색 도화지
    int x, y, count, area = 0;  // x좌표, y좌표, 색종이의 수

    cin >> count;

    for (int k = 0; k < count; k++) {
        cin >> x >> y;
        x -= 1, y -= 1;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1) {
                area += 1;
            }
        }
    }

    cout << area << endl;

    return 0;
}
