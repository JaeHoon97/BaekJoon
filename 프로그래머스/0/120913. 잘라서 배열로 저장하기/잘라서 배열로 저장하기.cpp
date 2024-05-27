#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;

    while (!my_str.empty()) {
        string str;

        if (my_str.size() >= n) {
            answer.push_back(my_str.substr(0,n));
            my_str.erase(0, n);
        } else {
            answer.push_back(my_str);
            my_str = "";
        }
        
    }

    return answer;
}