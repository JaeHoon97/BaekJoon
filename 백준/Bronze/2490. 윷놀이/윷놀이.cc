#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int choice;

    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            cin >> choice;
            if (choice == 0) {  // 배가 나오면
                count++;        // 카운트 증가
            }
        }
        if (count == 0) {  // 배가 0개일 때 모
            cout << 'E' << '\n';
        } else if (count == 1) {  // 배가 1개일 떄 도
            cout << 'A' << '\n';
        } else if (count == 2) {  // 배가 2개일 떄 개
            cout << 'B' << '\n';
        } else if (count == 3) {  // 배가 3개일 떄 걸
            cout << 'C' << '\n';
        } else { // 배가 4개일 떄 윷
            cout << 'D' << '\n';
        }
    }

    return 0;
}