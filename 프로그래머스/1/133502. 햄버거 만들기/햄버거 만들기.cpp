#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string str = "";
    string hamberger = "1231";

    if (ingredient.size() < 4) {
        return 0;
    }

    for (int num : ingredient) {
        str += to_string(num);
        if (to_string(num) == "1" && str.size() >= 4) {
            if (str.substr(str.size() - 4, 4) == "1231") {  // 맨뒤의 부분문자열이 "1231"일경우
                str.erase(str.size() - 4, 4);               // 맨뒤에서 4개를 제거해야함
                answer += 1;
            }
        }
    }

    return answer;
}