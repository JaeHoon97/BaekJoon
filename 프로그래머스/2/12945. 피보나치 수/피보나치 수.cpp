#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fibo[100005];

int solution(int n) {
    int answer = 0;

    fibo[0] = 0, fibo[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibo[i] = (fibo[i - 2] + fibo[i - 1]) % 1234567;
    }

    answer = fibo[n];

    return answer;
}