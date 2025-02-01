#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int getGCD(int a, int b) {
    int c = a % b;

    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int x, y, GCD;

    y = denom1 * denom2;
    x = numer1 * denom2 + numer2 * denom1;

    GCD = x > y ? getGCD(x, y) : getGCD(y, x);

    answer.push_back(x / GCD);
    answer.push_back(y / GCD);

    return answer;
}