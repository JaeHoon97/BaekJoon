#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;

    // 참가한 사람이 1명일 경우
    if (participant.size() == 1) {
        return participant[0];
    }

    // 참가한 사람의 명단을 저장
    for (string name : participant) {
        m[name] += 1;
    }

    // 참가한 사람 중 완주자 명단에 있으면 -1
    for (string name : completion) {
        m[name] -= 1;
    }
    
    // 이름이 제거되지 않았을 경우 완주하지 x
    for (auto p : m) {
        if (p.second >= 1) {
            answer = p.first;
            break;
        }
    }

    return answer;
}