#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;

    if((common[0] + common[2]) / 2.0 == common[1]) {
        answer = common.back() + (common[1] - common[0]);
    } else {
        answer = common.back() * (common[1] / common[0]);
    }

    return answer;
}