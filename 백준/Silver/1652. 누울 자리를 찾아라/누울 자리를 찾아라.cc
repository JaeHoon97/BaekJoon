#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int size, count = 0, width = 0, height = 0;

    cin >> size;

    char arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    // 가로
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i][j] == '.') {
                count++;
            } else {               // x를 만났을 떄
                if (count >= 2) {  // 누울공간이 2칸 이상일 경우
                    width++;
                }
                count = 0;
            }
        }
        if (count >= 2) {
            width++;
        }
        count = 0;
    }

    // 세로
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j][i] == '.') {
                count++;
            } else {               // x를 만났을 떄
                if (count >= 2) {  // 누울공간이 2칸 이상일 경우
                    height++;
                }
                count = 0;
            }
        }
        if (count >= 2) { // 끝까지 돌았을 때 체크 
            height++;
        }
        count = 0;
    }

    cout << width << " " << height << '\n';

    return 0;
}