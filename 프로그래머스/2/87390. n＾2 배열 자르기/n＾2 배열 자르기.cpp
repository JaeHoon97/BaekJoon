#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;

    for (long long i = left; i <= right; i++) {
        long long a = i / n;
        long long b = i % n;
        answer.push_back(max(a, b) + 1); 
    }

    return answer;
}