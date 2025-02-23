#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> key(26, 200);

    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].size(); j++) {
            key[keymap[i][j] - 'A'] = min(key[keymap[i][j] - 'A'], j + 1);
        }
    }

    for (int i = 0; i < targets.size(); i++) {
        int result = 0;
        for (int j = 0; j < targets[i].size(); j++) {
            if(key[targets[i][j] - 'A'] == 200) {
                result = -1;
                break;
            } else {
                result += key[targets[i][j] - 'A'];
            }
        }
        answer.push_back(result);
    }

    for(auto num : answer) {
        cout << num << endl;
    }

    return answer;
}