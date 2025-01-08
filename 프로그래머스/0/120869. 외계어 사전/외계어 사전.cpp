#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    int sum = 0;

    for (string str : spell) {
        sum += str[0];
    }

    for (string str : dic) {
        int innerSum = 0;
        for (char ch : str) {
            innerSum += ch;
        }
        if(innerSum == sum) {
            answer = 1;
        }
    }

    return answer;
}