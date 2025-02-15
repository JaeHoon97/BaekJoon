#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;

    for (int i = 0; i < name.size(); i++) {
        m[name[i]] = yearning[i];
    }

    for (vector<string> v : photo) {
        int sum = 0;
        for (string name : v) {
            sum += m[name];
        }
        answer.push_back(sum);
    }

    return answer;
}