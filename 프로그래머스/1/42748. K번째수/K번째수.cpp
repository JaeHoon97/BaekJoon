#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (vector<int> command : commands) {
        int start = command[0] - 1, end = command[1] - 1, k = command[2] - 1;
        vector<int> v;
        
        for (int i = start; i <= end; i++) {
            v.push_back(array[i]);
        }

        sort(v.begin(), v.end());

        answer.push_back(v[k]);

    }

    return answer;
}