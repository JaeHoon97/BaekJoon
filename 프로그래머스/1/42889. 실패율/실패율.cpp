#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(const pair<int, double> &a, const pair<int, double> &b) {
    if (a.second != b.second) {
        return a.second > b.second; // 내림차순
    } else {
        return a.first < b.first;   // 스테이지 번호 오름차순
    }
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> user(N + 2, 0); // 스테이지는 N+1까지, 마지막까지 클리어한 사람 포함
    vector<pair<int, double>> fail;

    for (auto stage : stages) {
        user[stage]++;
    }

    double userTotal = stages.size();

    // 각 스테이지별 실패율 계산
    for (int i = 1; i <= N; i++) {
        double failRate = 0.0;
        if (userTotal > 0) {
            failRate = (double)user[i] / userTotal;
            userTotal -= user[i];
        }
        fail.push_back({i, failRate});
    }

    // 실패율 기준 정렬
    sort(fail.begin(), fail.end(), cmp);

    // 정렬된 스테이지 번호 저장
    for (auto &f : fail) {
        answer.push_back(f.first);
    }

    return answer;
}
