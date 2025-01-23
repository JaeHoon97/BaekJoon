#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool flag = false;

    for (int i = 0; i < code.size(); i++) {
        if (!flag) {
            if (code[i] != '1') {
                if (i % 2 == 0) {
                    answer += code[i];
                }
            } else {
                flag = true;
            }
        } else {
            if (code[i] != '1') {
                if (i % 2 != 0) {
                    answer += code[i];
                }
            } else {
                flag = false;
            }
        }
    }

    return answer.empty() ? "EMPTY" : answer;
}