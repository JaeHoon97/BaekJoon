#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string str = "abcdefghijklmnopqrstuvwxyz";

    for (char ch : skip) {
        int pos = 0;
        while ((pos = str.find(ch)) != string::npos) {
            str.erase(str.begin() + pos);
        }
    }

    for (char ch : s) {
        int pos = 0;
        while ((pos = str.find(ch)) != string::npos) {
            answer += str.at((pos + index) % str.size());
            break;
        }
    }

    cout << answer << endl;

    return answer;
}