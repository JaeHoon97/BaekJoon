#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n / a != 0) {
        int back = n / a;
        answer += (back * b);
        n = (n / a) * b + (n % a);
    }

    return answer;
}