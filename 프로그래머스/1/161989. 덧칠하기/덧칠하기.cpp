#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    queue<int> q;

    for (auto num : section) {
        q.push(num);
    }

    while (!q.empty()) {
        int start = q.front();
        int last = start + m - 1;
        while (!q.empty() && start <= q.front() && q.front() <= last) {
            q.pop();
        }
        answer++;
    }

    return answer;
}