#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &left, const pair<int, int> &right) {
    if (left.first != right.first) {
        return left < right;
    } else {
        return left.second > right.second;
    }
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int, int>> v;

    for (int num : numlist) {
        v.push_back({abs(n - num), num});
    }

    sort(v.begin(), v.end(), compare);

    for(auto pair : v) {
        answer.push_back(pair.second); 
    }

    for(auto num : answer) {
        cout << num << endl;
    }

    return answer;
}