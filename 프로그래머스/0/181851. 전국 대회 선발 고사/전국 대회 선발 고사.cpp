#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;

    vector<pair<int, int>> v;

    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) {
            v.push_back({rank[i], i});
        }
    }

    sort(v.begin(), v.end());

    answer = v[0].second * 10000 + v[1].second * 100 + v[2].second;

    return answer;
}