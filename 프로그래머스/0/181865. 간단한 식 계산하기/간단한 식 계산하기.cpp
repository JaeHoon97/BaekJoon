#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int solution(string binomial) {
    int answer = 0, opIndex;
    string first, second;
    if (binomial.find("+") != string::npos) {
        opIndex = binomial.find("+");
        first = binomial.substr(0, opIndex - 1), second = binomial.substr(opIndex + 2);
        return stoi(first) + stoi(second);
    } else if (binomial.find("-") != string::npos) {
        opIndex = binomial.find("-");
        first = binomial.substr(0, opIndex - 1), second = binomial.substr(opIndex + 2);
        return stoi(first) - stoi(second);
    } else if (binomial.find("*") != string::npos) {
        opIndex = binomial.find("*");
        first = binomial.substr(0, opIndex - 1), second = binomial.substr(opIndex + 2);
        return stoi(first) * stoi(second);
    } else {
        return -1;
    }
}