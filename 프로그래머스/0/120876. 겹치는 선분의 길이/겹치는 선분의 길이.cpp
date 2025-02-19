#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int overlap[201] = {0};  // -100 ~ 100 까지 인덱스로 사용하기 위해 201 크기로 생성

    // 모든 선분의 구간 표시
    for (int i = 0; i < 3; i++) {
        int start = lines[i][0];
        int end = lines[i][1];
        
        // 선분의 시작부터 끝까지 1씩 증가
        for (int j = start; j < end; j++) {
            overlap[j + 100]++; // 인덱스가 음수가 될 수 있으므로 +100
        }
    }

    // 2개 이상의 선분이 겹치는 부분 길이 계산
    for (int i = 0; i < 201; i++) {
        if (overlap[i] > 1) {
            answer++;
        }
    }

    return answer;
}
