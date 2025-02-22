#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int myNum[46];

int getGrade(const int &num) {
    int result = 0;
    switch (num) {
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
            result = 7 - num;
            break;
        default:
            result = 6;
            break;
    }
    return result;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int result = 0;

    for (int lotto : lottos) {
        myNum[lotto]++;
    }

    for (int winNum : win_nums) {
        if (myNum[winNum]) {
            result++;
        }
    }

    answer.push_back(getGrade(result + myNum[0]));
    answer.push_back(getGrade(result));

    return answer;
}