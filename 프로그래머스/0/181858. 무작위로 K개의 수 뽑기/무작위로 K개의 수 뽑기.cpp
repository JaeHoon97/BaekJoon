#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    bool check[100005] = {false};

    for (auto num : arr) {
        if (!check[num]) {
            answer.push_back(num);
            check[num] = true;
        }
        if (answer.size() >= k) {
            break;
        }
    }

    int size = answer.size();

    if (size < k) {
        for (int i = 0; i < k - size; i++) {
            answer.push_back(-1);
        }
    }

    return answer;
}