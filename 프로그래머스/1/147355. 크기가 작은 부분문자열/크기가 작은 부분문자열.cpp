#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int tSize = t.size();
    int pSize = p.size();

    for (int i = 0; i <= tSize - pSize; i++) {
        if(stoll(t.substr(i, pSize)) <= stoll(p)) {
            answer++;
        }
    }

    return answer;
}