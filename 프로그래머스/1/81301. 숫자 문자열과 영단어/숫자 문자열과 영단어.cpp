#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string result;
    string temp;
    map<string, string> m;

    m["zero"] = "0", m["one"] = "1", m["two"] = "2", m["three"] = "3", m["four"] = "4";
    m["five"] = "5", m["six"] = "6", m["seven"] = "7", m["eight"] = "8", m["nine"] = "9";

    for (char ch : s) {
        if ('0' <= ch && ch <= '9') {  // 숫자일 경우
            result += ch;
            temp = "";
        } else {  // 영문자일 경우
            temp += ch;
            if(temp.size() >= 3 && m.find(temp) != m.end()) {
                result += m[temp];
                temp = "";
            }
        }
    }

    answer = stoi(result);

    return answer;
}