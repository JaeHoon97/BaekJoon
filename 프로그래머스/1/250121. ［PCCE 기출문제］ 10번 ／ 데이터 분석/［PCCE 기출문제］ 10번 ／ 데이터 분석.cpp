#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int index;

bool cmp(vector<int> a, vector<int> b) {
    return a[index] < b[index];
}

int getIndex(string ext) {
    if (ext == "code") {
        return 0;
    } else if (ext == "date") {
        return 1;
    } else if (ext == "maximum") {
        return 2;
    } else {  // remain
        return 3;
    }
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;

    index = getIndex(ext);

    for (int i = 0; i < data.size(); i++) {
        if( data[i][index] < val_ext) {
            answer.push_back(data[i]);
        }
    }

    index = getIndex(sort_by);

    sort(answer.begin(), answer.end(), cmp);

    return answer;
}