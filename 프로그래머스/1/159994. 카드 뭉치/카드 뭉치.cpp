#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    queue<string> q1, q2;
    int cnt = 0;

    for (auto str : cards1) {
        q1.push(str);
    }

    for (auto str : cards2) {
        q2.push(str);
    }

    for (int i = 0; i < goal.size(); i++) {
        if (!q1.empty() && q1.front() == goal[i]) {
            q1.pop();
            cnt++;
        }
        if (!q2.empty() && q2.front() == goal[i]) {
            q2.pop();
            cnt++;
        }
    }

    return (cnt == goal.size()) ? "Yes" : "No";
}