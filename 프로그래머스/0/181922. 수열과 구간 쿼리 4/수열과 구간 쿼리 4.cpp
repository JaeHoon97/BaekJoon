#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (auto v : queries) {
        for (int i = v[0]; i <= v[1]; i++) {
            if (i % v[2] == 0) {
                arr[i]++;
            }
        }
    }

    return arr;
}