#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    // spell을 정렬하여 고유 패턴 생성
    sort(spell.begin(), spell.end());
    string target = "";
    for (const string& s : spell) {
        target += s;
    }

    // dic을 unordered_set으로 변환
    unordered_set<string> dictionary(dic.begin(), dic.end());

    // dic에서 각 단어를 정렬 후 비교
    for (const string& word : dictionary) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        if (sortedWord == target) {
            return 1; // 일치하는 단어를 찾음
        }
    }

    return 2; // 일치하는 단어가 없음
}