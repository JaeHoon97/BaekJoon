#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    

    for (int i = l; i <= r; i++) {
        bool flag = true;
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++) {
            if (str[j] != '5' && str[j] != '0') {
                flag = false;
                break;
            }
        }
        if (flag) {
            answer.push_back(i);
        }
    }

    if(answer.empty()) {
        answer.push_back(-1);
    }

    return answer;
}