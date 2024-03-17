#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

    while(my_string.size() != 0) {
        answer.push_back(my_string);
        my_string.erase(0, 1);
    }

    sort(answer.begin(), answer.end());

    return answer;
}