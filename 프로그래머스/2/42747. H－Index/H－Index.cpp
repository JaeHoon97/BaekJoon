#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int size = citations.size();

    sort(citations.begin(), citations.end());

    for (int i = 0; i < size; i++) {
        if (size - i <= citations[i]) {
            answer = max(answer, size - i);
        }
    }

    return answer;
}