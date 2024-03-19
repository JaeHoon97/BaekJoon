#include <string>
#include <set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    set<char> s;

    for(const auto& ch : my_string) {
        if(s.insert(ch).second) {
            answer.push_back(ch);
        }
    }

    return answer;
}