#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    answer.push_back(n);
    
    while(n != 1) {
        (n % 2 == 0) ? (n = n / 2) : (n = 3 * n + 1);
        answer.push_back(n);
    }
    
    return answer;
}


/*
    짝수일 때 2로 나누고.
    홀수일 때 3을 곱하고 1을 더한다.
    그 결과 수열을 반환하라.
*/