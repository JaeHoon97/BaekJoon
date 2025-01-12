#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";

    for (const vector<string> &v : db) {
        if(v[0] == id_pw[0]) {
            answer = "wrong pw";
            if(v[1] == id_pw[1]) {
                answer = "login";
                break;
            }
        }
    }

    return answer;
}