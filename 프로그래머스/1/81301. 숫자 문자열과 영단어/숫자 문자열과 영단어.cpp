#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int solution(string s) {
    // 숫자와 영단어의 매핑
    unordered_map<string, string> numMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
        {"eight", "8"}, {"nine", "9"}
    };

    // 영단어를 숫자로 치환
    for (const auto& pair : numMap) {
        size_t pos = 0;
        while ((pos = s.find(pair.first, pos)) != string::npos) {
            s.replace(pos, pair.first.length(), pair.second);
        }
    }

    // 최종적으로 숫자로 변환하여 반환
    return stoi(s);
}