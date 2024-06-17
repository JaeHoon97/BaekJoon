#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int index = -1;

    for (int i = 0; i < str_list.size(); i++) {
        if (str_list[i] == "l" || str_list[i] == "r") {
            index = i;
            break;
        }
    }

    if (str_list[index] == "l") {
        for (int i = 0; i < index; i++) {
            answer.push_back(str_list[i]);
        }
    }
    if (str_list[index] == "r") {
        for (int i = index+1; i < str_list.size(); i++) {
            answer.push_back(str_list[i]);
        }
    }


    return answer;
}