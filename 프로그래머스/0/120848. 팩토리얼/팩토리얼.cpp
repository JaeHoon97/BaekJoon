#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int factorial = 1, num = 0;

    while (factorial <= n) {
        num++;
        factorial *= num;
    }

    return num-1;
}