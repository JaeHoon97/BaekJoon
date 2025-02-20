#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0, same = 0, diff = 0;
    string word = "";
    
    for (char ch : s) {
        string str = to_string(ch);
        if (word.empty()) {
            word = str;
        }

        (word == str) ? same += 1 : diff += 1;

        if (same == diff) {
            answer += 1;
            word = "";
            same = 0;
            diff = 0;
        }
    }

    if (same != 0 || diff != 0) {
        answer += 1;
    }

    return answer;
}