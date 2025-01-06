#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string makeWidth(string str, const int &k) {
    string result = "";

    for (char ch : str) {
        for (int i = 0; i < k; i++) {
            result += ch;
        }
    }

    return result;
}

vector<string> makeHeight(vector<string> v, const int &k) {
    vector<string> result;

    for (string str : v) {
        for (int i = 0; i < k; i++) {
            result.push_back(str);
        }
    }

    return result;
}

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;

    for (int i = 0; i < picture.size(); i++) {
        picture[i] = makeWidth(picture[i], k);
    }

    answer = makeHeight(picture, k);

    return answer;
}