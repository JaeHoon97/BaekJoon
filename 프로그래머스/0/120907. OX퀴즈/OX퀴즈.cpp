#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    int pos = 0;
    string token = "";

    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }

    ret.push_back(input);

    return ret;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    vector<string> v;

    for(string str : quiz) {
        v = split(str, " ");

        if(v[1] == "+") {
            stoi(v[0]) + stoi(v[2]) == stoi(v[4]) ? answer.push_back("O") : answer.push_back("X");
        } else {
            stoi(v[0]) - stoi(v[2]) == stoi(v[4]) ? answer.push_back("O") : answer.push_back("X");
        }
    }

    return answer;
}