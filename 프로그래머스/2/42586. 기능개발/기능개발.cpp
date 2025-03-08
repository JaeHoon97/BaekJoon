#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int n = progresses.size();
    // 각 작업이 완료되기까지 필요한 일수를 계산
    vector<int> days(n);
    for (int i = 0; i < n; i++) {
        // 올림 계산 (C++에서 ceil을 쓰면 double로 변환되므로 int 계산)
        days[i] = (100 - progresses[i] + speeds[i] - 1) / speeds[i];
    }
    
    // 첫 번째 작업의 완료일을 기준으로 그룹을 묶습니다.
    int max_day = days[0];
    int count = 1;
    
    // 두 번째 작업부터 반복하면서 그룹을 묶습니다.
    for (int i = 1; i < n; i++) {
        if (days[i] <= max_day) {
            // 현재 작업이 기준보다 빨리 완료되더라도 앞 작업이 완료되어야 하므로 같은 그룹
            count++;
        } else {
            // 기준보다 늦게 완료된다면, 이전 그룹 배포 완료 후 새로운 그룹 시작
            answer.push_back(count);
            count = 1;
            max_day = days[i];
        }
    }
    // 마지막 그룹 추가
    answer.push_back(count);
    
    return answer;
}

