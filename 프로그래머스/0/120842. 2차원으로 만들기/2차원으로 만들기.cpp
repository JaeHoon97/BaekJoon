#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;

    int size = (num_list.size() / n);

    for (int i = 0; i < size; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            v.push_back(num_list[0]);
            num_list.erase(num_list.begin());
        }
        answer.push_back(v);
    }

    return answer;
}