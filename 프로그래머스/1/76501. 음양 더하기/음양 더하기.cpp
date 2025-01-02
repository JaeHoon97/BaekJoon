#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int size = signs.size();

    for (int i = 0; i < size; i++) {
        signs[i] ? answer += absolutes[i] : answer -= absolutes[i];
    }

    return answer;
}