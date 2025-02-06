#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, M;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> M >> N; // M이상 N이하의 자연수

    for (int i = M; i <= N; i++) {
        bool isPrime = true; // 소수 판별

        if(i == 1) { // 1은 소수 판별 필요 없음
            continue;
        }

        for (int j = 2; j * j <= i; j++) {
            if(i % j == 0) { // 만약에 나누어 떨어지면 약수이므로
                isPrime = false; // 소수가 아님을 체크
                break; // 반복문 탈출
            }
        }

        if(isPrime) { // 소수일 경우
           cout << i << '\n'; // 해당 정수 출력
        }
    }

    return 0;
}