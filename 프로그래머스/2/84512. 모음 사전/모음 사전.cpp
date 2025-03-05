#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string arr[5] = {"A", "E", "I", "O", "U"};
map<string, int> m;
int num = 1;

void foo(string word) {
    if (word.size() > 5) {
        return;
    }

    m[word] = num++;

    for (string str : arr) {
        foo(word + str);
    }
}

int solution(string word) {
    int answer = 0;

    for (string str : arr) {
        foo(str);
    }

    answer = m[word];

    return answer;
}