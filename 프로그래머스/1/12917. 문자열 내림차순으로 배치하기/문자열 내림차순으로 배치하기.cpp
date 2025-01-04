#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<>());
    return s;
}