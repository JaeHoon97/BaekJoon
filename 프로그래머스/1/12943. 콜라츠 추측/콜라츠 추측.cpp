#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long myNum = num;
    int answer = 0;

    if (myNum == 1) {
        return 0;
    }

    while (myNum != 1) {
        if (answer >= 500) {
            return -1;
        }
        if (myNum % 2 == 0) {
            myNum /= 2;
        } else {
            myNum = myNum * 3 + 1;
        }
        answer += 1;
    }

    return answer;
}