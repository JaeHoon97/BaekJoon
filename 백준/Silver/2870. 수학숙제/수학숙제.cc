/*
    - 문제
        숫자와 알파벳 소문자로 되어있는 글자가 N줄 주어진다.
        여기서 숫자를 모두 찾은 뒤, 이 숫자를 비내림차순으로 정리한다.
        숫자의 앞에 0이 있는 경우에는 정리하면서 생략할 수 있다.
        숫자가 나오는 경우에는, 가능한 가장 큰 숫자를 찾아야 한다.
        모든 숫자는 문자사이에 끼어있거나, 문자열의 가장 맨앞 또는 맨뒤이다.
    - 자료구조
        vector
    - 복잡도

*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;
vector<string> result;

bool compare(string left, string right) {
    if(left.size() != right.size()) {
        return left.size() < right.size();
    } else {
        return left < right;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;  // 종이의 줄의 개수

    cin >> N;  // 범위는 1이상 100이하

    for (int i = 0; i < N; i++) {
        string content, str;  // 종이의 내용. 최대 100글자이고, 알파벳 소문자와 숫자로만 이루어져 있다.

        cin >> content;

        for (int j = 0; j < content.size(); j++) {      // 문자열을 순회
            if (content[j] < 97 || 122 < content[j]) {  // 만약 숫자일 경우
                str.push_back(content[j]);              // 해당 숫자를 문자열 str에 추가
            } else {                                    // 만약 소문자일 경우, 이제까지 숫자를 저장한 str이 필요
                if (!str.empty()) {                     // 이전까지 저장된 숫자가 있다면
                    v.push_back(str);                   // 숫자를 배열에 저장
                    str = "";                           // 문자열 저장소 다시 초기화
                }
            }
        }

        if (!str.empty()) {    // 마지막 문자가 숫자였을 때 str에 숫자가 남아있기 때문에
            v.push_back(str);  // 배열에 저장
        }
    }

    for (auto& s : v) {
        while (true) {
            if (s.front() == '0' && s.size() > 1) {
                s.erase(0, 1);
            } else {
                break;
            }
        }
    }

    sort(v.begin(), v.end(), compare);

    for (const auto& s : v) {
        cout << s << endl;
    }

    return 0;
}
