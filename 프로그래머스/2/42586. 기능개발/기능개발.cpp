#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    for (int i = 0; i < progresses.size(); i++) {
        // 남은 작업량
        int remainProgress = 100 - progresses[i];
        // 소요 날
        int days = (remainProgress % speeds[i] == 0) ? (remainProgress / speeds[i]) : (remainProgress / speeds[i]) + 1;
        // 큐에 소요 날 추가
        q.push(days);
    }

   while(!q.empty()) {
        int cnt = 1;
        int cur = q.front();
        
        q.pop();

        while(cur >= q.front() && !q.empty()) {
            q.pop();
            cnt++;
        }

        answer.push_back(cnt);
    }

    return answer;
}