#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int row = my_string.size() / m;
    vector<string> v;

    while (!my_string.empty()) {
        v.push_back(my_string.substr(0, m));
        my_string.erase(0, m);
    }

    for (int i = 0; i < row; i++) {
        answer += v[i][c-1];
    }

    return answer;
}