#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++) {
        int firstIndex = queries[i][0], secondIndex = queries[i][1];
        int temp;

        temp = arr[firstIndex];
        arr[firstIndex] = arr[secondIndex];
        arr[secondIndex] = temp;

    }
    answer = arr;
    return answer;
}