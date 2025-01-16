#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, x = 0;
    stack<int> s;
    string str = "";

    while (n >= 3) {
        s.push(n % 3);
        n = n / 3;
    }

    s.push(n);

    while (!s.empty()) {
        answer += (s.top() * pow(3, x++));
        s.pop();
    }

    return answer;
}