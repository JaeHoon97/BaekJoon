#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0], index = 0;

    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }

    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }

    arr.erase(arr.begin() + index);

    return arr;
}