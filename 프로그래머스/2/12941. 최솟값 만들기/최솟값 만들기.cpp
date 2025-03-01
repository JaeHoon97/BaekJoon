#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    int size = A.size();

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < size; i++) {
        answer += A[i] * B[size - 1 - i];
    }

    return answer;
}