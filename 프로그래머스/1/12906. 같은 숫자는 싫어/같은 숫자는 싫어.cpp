#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    stack<int> stack;

    for (int i = 0; i < arr.size(); i++) {
        if (!stack.empty()) {
            if (stack.top() != arr[i]) {
                answer.push_back(arr[i]);
            }
        } else {
            answer.push_back(arr[i]);
        }
        stack.push(arr[i]);
    }

    return answer;
}