#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }

        if (s[i-1] == ' ') {
            s[i] = toupper(s[i]);
        }
    }

    return s;
}