#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

string solution(string polynomial) {
    string answer = "";
    long long a = 0, b = 0;

    vector<string> v = split(polynomial, " + ");

    for (auto str : v) {
        if (str.find('x') != string::npos) {
            if (str == "x") {
                a += 1;
            } else {
                a += stoll(str.substr(0, str.size() - 1));
            }
        } else {
            b += stoll(str);
        }
    }

    if (a == 0) {
        answer = to_string(b);
    } else if (a == 1) {
        if (b == 0) {
            answer = "x";
        } else {
            answer = "x + " + to_string(b);
        }
    } else {
        if (b == 0) {
            answer = to_string(a) + "x";
        } else {
            answer = to_string(a) + "x + " + to_string(b);
        }

    }

    return answer;
}