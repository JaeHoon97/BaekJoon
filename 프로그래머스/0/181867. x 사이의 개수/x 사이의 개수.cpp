#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    
    vector<int> answer;
    int count = 0;
    
    for (const char& c : myString) {
        if (c == 'x') { // x가 나왔다면
            answer.push_back(count); // 이전까지의 길이를 배열에 저장
            count = 0; // 길이 초기화
        } else { // x가 나오지 않았다면
            count++; // 길이 1 증가
        }
    }
    
    answer.push_back(count); // x가 끝에 나오지 않았을 경우 누적된 count도 추가
    
    return answer;
}

// 문자열이 주어지고, 문자 x를 기준으로 쪼개는데, 쪼개진 문자열의 길이를 구하여 배열에 저장하라.
// x가 나오지 않았다면 count를 증가시키고 다음 인덱스로 이동한다.
// 만약 x가 나왔다면 count를 배열에 저장하고 0으로 초기화한다.
// x가 문자열 끝에 나온다는 보장이 없으므로 마지막 count를 배열에 넣어준다.