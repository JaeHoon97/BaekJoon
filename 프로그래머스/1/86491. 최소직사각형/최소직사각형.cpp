#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> v1, v2;

    for (vector<int> size : sizes) {
        if (size[0] >= size[1]) {
            v1.push_back(size[0]);
            v2.push_back(size[1]);
        } else {
            v1.push_back(size[1]);
            v2.push_back(size[0]);
        }
    }

    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());

    answer = v1[0] * v2[0];

    return answer;
}