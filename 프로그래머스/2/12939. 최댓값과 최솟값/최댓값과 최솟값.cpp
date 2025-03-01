#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> result;
    long long pos = 0;
    string token = "";

    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        result.push_back(token);
        input.erase(0, pos + delimiter.size());
    }

    result.push_back(input);

    return result;
}

string solution(string s) {
    string answer = "";
    vector<int> v;

    for (string str : split(s, " ")) {
        v.push_back(stoi(str));
    }

    sort(v.begin(), v.end());

    answer += to_string(v.front()) + " " + to_string(v.back());

    return answer;
}