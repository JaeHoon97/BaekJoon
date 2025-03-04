#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;

    for(int val : arr) {
        answer = lcm(answer, val);
    }

    return answer;
}