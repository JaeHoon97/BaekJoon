#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int sum = 0, cnt = 0, index = 0;

    sort(d.begin(), d.end());

    while (sum + d[index] <= budget && index < d.size()) {
        sum += d[index++];
        cnt++;
    }

    return index;
}