#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (const auto& num : array) {
        string str = to_string(num);

        for (int i = 0; i < str.size(); i++) {
            if(str[i] == '7'){
                answer++;
            }
        }
    }

    return answer;
}