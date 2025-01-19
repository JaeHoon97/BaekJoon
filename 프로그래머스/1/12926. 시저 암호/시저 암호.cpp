#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            answer += s[i];
            continue;
        }
        if (isupper(s[i])) {
            answer += ((s[i] - 65 + n) % 26) + 65;
        } else {
            answer += ((s[i] - 97 + n) % 26) + 97;
        }
    }

    return answer;
}