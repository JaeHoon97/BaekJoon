#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;

    string str;

    for (const auto& c : myString) {
        if (c != 'x') {
            str += c;
        } else {
            if (!str.empty()) {
                answer.push_back(str);
                str.clear();
            }
        }
    }

    if (!str.empty()) {
        answer.push_back(str);
    }

    sort(answer.begin(), answer.end());

    return answer;
}
