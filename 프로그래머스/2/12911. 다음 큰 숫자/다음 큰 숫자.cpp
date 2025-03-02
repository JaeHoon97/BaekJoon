#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getOneSize(string str) {
    int result = 0;

    for (char ch : str) {
        if (ch == '1') {
            result++;
        }
    }

    return result;
}

string toBinary(int num) {
    string result = "";

    while (num != 1) {
        result += to_string(num % 2);
        num /= 2;
    }

    result += to_string(num);
    reverse(result.begin(), result.end());

    return result;
}

int solution(int n) {
    int answer = n + 1;
    const int a = getOneSize(toBinary(n));

    while( a != getOneSize(toBinary(answer))) {
        answer++;
    }

    return answer;
}