#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (auto query : queries) {
        int s = query[0], e = query[1], k = query[2], val = 1000005;

        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                val = min(val, arr[i]);
            }
        }
        (val != 1000005) ? answer.push_back(val) : answer.push_back(-1);
    }

    return answer;
}