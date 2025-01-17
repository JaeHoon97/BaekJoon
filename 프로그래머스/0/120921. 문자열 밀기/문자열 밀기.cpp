#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;

    if (A == B) {
        return 0;
    }

    while (answer < A.size()) {
        answer += 1;
        A = A.back() + A.substr(0, A.size() - 1);
        if (A == B) {
            break;
        }
    }

    if (answer == A.size()) {
        answer = -1;
    }

    return answer;
}