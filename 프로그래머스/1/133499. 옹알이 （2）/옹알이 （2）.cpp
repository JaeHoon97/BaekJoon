#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> words = {"aya", "ye", "woo", "ma"};

    for (string bab : babbling) {
        string lastWord = "";  // 마지막에 사용한 발음을 저장

        while (!bab.empty()) {
            bool matched = false;
            for (const string &word : words) {
                // 현재 단어로 시작하고, 연속된 발음이 아닌 경우
                if (bab.find(word) == 0 && lastWord != word) {
                    lastWord = word;
                    bab.erase(0, word.size());
                    matched = true;
                    break;
                }
            }

            // 어떤 단어와도 매칭되지 않으면 더 이상 검사할 필요 없음
            if (!matched) break;
        }

        answer += (bab.empty() ? 1 : 0);
    }

    cout << answer << endl;
    return answer;
}

