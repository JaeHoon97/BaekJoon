#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int getPrimeCount(const int& num) {
    int count = 0;

    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            (i * i == num) ? count += 1 : count += 2;
        }
    }

    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;

    for (int i = 1; i <= number; i++) {
        v.push_back(getPrimeCount(i));
    }

    for (int i = 0; i < v.size(); i++) {
        (v[i] <= limit) ? answer += v[i] : answer += power;
    }

    return answer;
}