#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int x, y; // 두 자연수 x, y

    while (true) {
        cin >> x >> y; 
        if(x == 0 && y ==0){ // 두 자연수가 0 0을 입력받았을 경우 종료 
            break; 
        } // x를 기준으로 
        if (x % y == 0) { // x가 y의 배수일 경우 
            cout << "multiple" << endl;
        } else if (y % x == 0) { // x가 y의 약수일 경우
            cout << "factor" << endl;
        } else { // 둘 다 아닐 경우
            cout << "neither" << endl;
        }
    }

    return 0;
}
