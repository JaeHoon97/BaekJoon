#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    int answer = 0;
    __int128 x = 1, y = 1;

    if (balls - share < share) {
        share = balls - share;
    }

    for (int i = balls - share + 1; i <= balls; i++) {
        x *= i;
    }

    for (int i = 1; i <= share; i++) {
        y *= i;
    }

    answer = x / y;

    return answer;
}