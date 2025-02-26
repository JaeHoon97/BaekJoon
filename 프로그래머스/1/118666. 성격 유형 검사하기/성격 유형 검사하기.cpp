#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char mbti[100];

char getMbti(const string& str) {
    if (mbti[str[0]] == mbti[str[1]]) {  // 두 유형의 점수가 같을 경우
        return str[0];
    } else {  // 두 유형의 점수가 다를 경우
        return (mbti[str[0]] > mbti[str[1]] ? str[0] : str[1]);
    }
}

void setPersonality(const string& str, const int& choice) {
    if (choice < 4) {  // 비동의 점수
        mbti[str[0]] += (4 - choice);
    } else if (choice > 4) {  // 동의 점수
        mbti[str[1]] += (choice - 4);
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<string> v = {"RT", "CF", "JM", "AN"};

    // survey와 choices를 전달하여 성격유형 검사
    for (int i = 0; i < survey.size(); i++) {
        setPersonality(survey[i], choices[i]);
    }

    for (int i = 0; i < v.size(); i++) {
        answer += getMbti(v[i]);
    }

    return answer;
}