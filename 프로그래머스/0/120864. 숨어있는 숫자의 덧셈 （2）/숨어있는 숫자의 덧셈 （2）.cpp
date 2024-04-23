#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str;

    for (int i = 0; i < my_string.size(); i++) {
        if ('A' <= my_string[i] && my_string[i] <= 'Z' || 'a' <= my_string[i] && my_string[i] <= 'z') {
            if (!str.empty()) {
                answer += stoi(str);
            }
            str.clear();
        } else {
            str += my_string[i];
        }
    }

    if (!str.empty()) {
        answer += stoi(str);
    }

    return answer;
}