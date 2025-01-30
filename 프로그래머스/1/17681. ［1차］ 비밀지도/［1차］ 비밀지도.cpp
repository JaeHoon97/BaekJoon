#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++) {
        int num = arr1[i] | arr2[i];
        string s = "";

        while (num >= 1) {
            s += to_string(num % 2);
            num = num / 2;
        }

        while (s.size() != n) {
            s += "0";
        }

        reverse(s.begin(), s.end());

        answer.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            answer[i][j] == '1' ? answer[i][j] = '#' : answer[i][j] = ' ';
        }
    }

    return answer;
}