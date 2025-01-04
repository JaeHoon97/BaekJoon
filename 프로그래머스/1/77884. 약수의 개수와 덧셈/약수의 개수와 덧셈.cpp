#include <string>
#include <vector>

using namespace std;

int getFactors(const int& number) {
    int sum = 0;
    for (int i = 1; i * i <= number; i++) {
        if (i * i != number) {
            sum += 2;
        } else {
            sum++;
        }
    }
    return sum;
}

int solution(int left, int right) {
    int answer = 0, cnt = 0;

    for (int i = left; i <= right; i++) {
        cnt = getFactors(i);
        (cnt % 2 == 0) ? answer += i : answer -= i;
    }

    return answer;
}