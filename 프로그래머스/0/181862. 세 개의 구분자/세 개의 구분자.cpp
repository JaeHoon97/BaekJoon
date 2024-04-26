#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str;

    for (int i = 0; i < myStr.size(); i++) {
        if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c') {
            if (!str.empty()) {
                answer.push_back(str);
                str = "";
            }
        } else {
            str += myStr[i];
        }
    }

    if (!str.empty()) {
        answer.push_back(str);
    } else {
        answer.push_back("EMPTY");
    }

    return answer;
}