#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int size = 0;
    string answer = "";

    for(auto name: seoul) {
        if(name.compare("Kim") == 0) {
            break;
        }
        size++;
    }

    answer.append("김서방은 ");
    answer.append(to_string(size));
    answer.append("에 있다");
    
    return answer;
}