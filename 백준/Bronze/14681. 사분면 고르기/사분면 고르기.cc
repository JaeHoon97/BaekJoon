#include <iostream>
using namespace std;

int getQuadrant(int x, int y) {  // 사분면을 구하는 함수
    if (0 <= x * y) {            // 만약 두 수의 곱이 양수일 경우 1사분면 또는 3사분면
        if (x >= 0) { 
            return 1;
        } else { 
            return 3;
        }
    } else {  // 만약 두 수의 곱이 음수일 경우 2사분면 또는 4사분면
        if (x>=0){
            return 4;
        } else {
            return 2;
        }
    }

    return x + y;
}

int main(void) {
    int x = 0, y = 0;  // 좌표 설정

    cin >> x >> y;

    cout << getQuadrant(x, y) << endl;

    return 0;
}
