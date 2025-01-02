#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0, start, end;

    (a <= b) ? (start = a, end = b) : (start = b, end = a);

    for (int i = start; i <= end; i++) {
        answer += i;
    }

    return answer;
}