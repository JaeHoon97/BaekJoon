#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int stone, tryCount = 0;

    cin >> stone;

    tryCount = (stone / 3) + (stone % 3);

    if (tryCount % 2 == 0) { // 시도 횟수가 짝수일 경우
        cout << "CY" << '\n'; 
    } else { // 시도 횟수가 홀수일 경우
        cout << "SK" << '\n';
    }

    return 0;
}

// 시도 횟수가 홀수면 상근 승, 짝수이면 창영 승

// 5
// 3 1 1 시도 횟수 3번 따라서 상근 승
// 1 1 1 1 1 시도 횟수 5번 따라서 상근 승

// 10
// 3 3 3 1 시도 횟수 4 창영 승

// 11
// 3 3 3 1 1 창영 승 시도 횟수가 홀수 따라서 상근승
