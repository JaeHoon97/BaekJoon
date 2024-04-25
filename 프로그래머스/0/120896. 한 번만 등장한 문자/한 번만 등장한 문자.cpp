#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;

    for (const auto& c : s) {
        m[c]++;
    }

    for (auto it = m.begin(); it != m.end(); it++) {
        if(it->second == 1){
            answer+=(it->first);
        }
    }

    return answer;
}
