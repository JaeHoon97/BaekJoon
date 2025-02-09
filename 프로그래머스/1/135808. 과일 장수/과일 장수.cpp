#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int size = score.size();

    sort(score.begin(), score.end(), greater<>());

    for (int i = m - 1; i < size; i += m) {
        answer += score[i] * m;
    }

    return answer;
}