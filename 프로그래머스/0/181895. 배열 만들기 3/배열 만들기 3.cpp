#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;

    for (int i = 0; i < 2; i++) {
        vector<int> v = intervals[i];
        for (int index = v[0]; index <= v[1]; index++) {
            answer.push_back(arr[index]);
        }
    }

    return answer;
}