#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int num : score) {
        if(pq.size() >= k) {
            if(pq.top() < num) {
                pq.pop();
                pq.push(num);
            }
            answer.push_back(pq.top());
        } else {
            pq.push(num);
            answer.push_back(pq.top());
        }
    }

    return answer;
}