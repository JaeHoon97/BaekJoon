#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime[1000005];

int solution(int n) {
    int answer = 0;

    for (int i = 2; i <= 1000000; i++) {
        if (isPrime[i] == true) {  // 소수일 경우
            continue;
        }
        for (int j = i * 2; j <= 1000000; j += i) {
            isPrime[j] = true;  // j의 배수는 소수임을 체크
        }
    }

    for (int i = 2; i <= n; i++) {
        if (!isPrime[i]) {  // 소수가 아닐경우
            answer++;
        }
    }

    return answer;
}