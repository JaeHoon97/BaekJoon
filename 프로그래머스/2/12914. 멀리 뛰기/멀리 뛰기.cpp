#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long arr[2005];

long long solution(int n) {
    long long answer = 0;

    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= n; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }

    answer = arr[n];

    return answer;
}