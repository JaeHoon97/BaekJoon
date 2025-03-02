#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int changeCount = 0;
int removeCount = 0;

int getOneCount(string s) {
    int result = 0;

    for (char ch : s) {
        (ch == '1') ? result++ : removeCount++; 
    }

    return result;
}

string toBinary(int num) {
    string result = "";

    while(num != 1) {
        result += to_string(num % 2);
        num /= 2;
    }

    result += to_string(num);

    reverse(result.begin(), result.end());

    return result;
}

vector<int> solution(string s) {
    vector<int> answer;

    while (s != "1") {
        int size = getOneCount(s);
        s = toBinary(size);
        changeCount++;
    }

    answer.push_back(changeCount);
    answer.push_back(removeCount);

    return answer;
}