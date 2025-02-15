#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer, result(3, 0);
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int arr3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int maxScore = 0;

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == arr1[i % 5]) {
            result[0]++;
        }
        if (answers[i] == arr2[i % 8]) {
            result[1]++;
        }
        if (answers[i] == arr3[i % 10]) {
            result[2]++;
        }
    }

    maxScore = *max_element(result.begin(), result.end());

    for (int i = 0; i < 3; i++) {
        if (maxScore==result[i]) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}