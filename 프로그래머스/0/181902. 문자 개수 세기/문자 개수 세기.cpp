#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);

    for(const char& ch : my_string) {
        if(ch >= 'a') { // 소문자는 대문자 보다 뒤에 있음
            answer[ch - 'a' + 26]++;
        } else { // 대문자는 소문자보다 앞에 있음
            answer[ch - 'A']++;
        }
    }

    return answer;
}