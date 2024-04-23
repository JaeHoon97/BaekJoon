#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer = emergency;
    vector<int> result;
    map<int, int> m;

    sort(emergency.begin(), emergency.end(), greater<int>());

    for (int i = 0; i < emergency.size(); i++) {
        m[emergency[i]] = i + 1;
    }

    for (int i = 0; i < answer.size(); i++) {
        result.push_back(m[answer[i]]);
    }

    return result;
}