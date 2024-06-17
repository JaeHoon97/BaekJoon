#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0, index = 0;

    for (int i = 1; i <= k; i++) {
        answer = numbers[index];
        index = (index + 2) % numbers.size();
    }

    return answer;
}