#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array) {
    map<int, int> m;
    int maxVal = 0, maxNum;
    bool flag = false;

    for(auto num: array) {
        m[num]++;
    }

    for(pair<int, int> p : m) {
        if(p.second >= maxVal) {
            if(p.second != maxVal) {
                maxVal = p.second;
                maxNum = p.first;
                flag = false;
            } else {
                flag = true; // 같은 빈도가 출현
            }
        }
    }

    return flag ? -1 : maxNum;
}