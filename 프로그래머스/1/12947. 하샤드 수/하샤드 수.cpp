#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num = x;
    bool answer = true;
    int remain, sum = 0;

    do {
        remain = x % 10;
        sum += remain;
        x /= 10;
    } while (x != 0);

    (num % sum == 0) ? answer = true : answer = false;

    return answer;
}