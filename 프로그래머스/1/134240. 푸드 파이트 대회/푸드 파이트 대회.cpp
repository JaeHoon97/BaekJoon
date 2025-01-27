#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string rev = "";

    for (int i = 1; i < food.size(); i++) {
        int num = food[i] / 2;
        
        for (int j = 0; j < num; j++) {
            answer += to_string(i);
        }
    }

    rev = answer;
    reverse(rev.begin(), rev.end());
    answer += "0";
    answer += rev;

    return answer;
}