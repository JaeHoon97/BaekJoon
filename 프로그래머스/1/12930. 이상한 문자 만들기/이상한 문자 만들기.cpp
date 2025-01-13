#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            cnt = 0;
            continue;
        } else {
            (cnt % 2 == 0) ? s[i] = toupper(s[i]) : s[i] = tolower(s[i]);
            cnt++;
        }
    }

    return s;
}