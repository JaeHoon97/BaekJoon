#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int num;

bool cmp(string a, string b) {
    int size = max(a.size(), b.size());

    if (a[num] != b[num]) {
        return a[num] <= b[num];
    } else {
        return a < b;
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    num = n;

    sort(strings.begin(), strings.end(), cmp);

    answer = strings;

    return answer;
}