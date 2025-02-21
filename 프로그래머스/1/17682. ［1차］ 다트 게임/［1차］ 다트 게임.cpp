#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0, index = 0;
    string str = "";
    int arr[3] = {0, 0, 0};

    for (char ch : dartResult) {
        if ('0' <= ch && ch <= '9') {  // 숫자가 나올경우
            str += ch;
        } else if (ch == 'S') {
            arr[index] += stoi(str);
            str = "";
            index++;
        } else if (ch == 'D') {
            arr[index] += pow(stoi(str), 2);
            str = "";
            index++;
        } else if (ch == 'T') {
            arr[index] += pow(stoi(str), 3);
            str = "";
            index++;
        } else if (ch == '*') {
            if (index == 1) {
                arr[0] *= 2;
            } else {
                arr[index - 1] *= 2;
                arr[index - 2] *= 2;
            }
        } else if (ch == '#') {
            arr[index - 1] *= -1;
        }
    }

    answer += arr[0] + arr[1] + arr[2]; 
    return answer;
}