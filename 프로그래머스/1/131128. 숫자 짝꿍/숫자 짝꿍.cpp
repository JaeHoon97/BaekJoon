#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arrX[10];
int arrY[10];

string solution(string X, string Y) {
    string answer = "";

    for (char ch : X) {
        arrX[ch - '0'] += 1;
    }

    for (char ch : Y) {
        arrY[ch - '0'] += 1;
    }

    for (int i = 9; 0 <= i; i--) {
        int count = min(arrX[i], arrY[i]);

        for (int j = 0; j < count; j++) {
            answer += to_string(i);
        }
    }

    return (answer.empty()) ? "-1" : (answer[0] == '0') ? "0" : answer;
}