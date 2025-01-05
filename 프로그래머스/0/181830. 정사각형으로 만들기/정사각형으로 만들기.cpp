#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;

    if (arr.size() > arr[0].size()) {
        int diff = arr.size() - arr[0].size();
        for (vector<int> &v : arr) {
            for (int i = 0; i < diff; i++) {
                v.push_back(0);
            }
        }
    } else if (arr.size() < arr[0].size()) {
        int diff = arr[0].size() - arr.size();
        int size = arr[0].size();
        for (int i = 0; i < diff; i++) {
            vector<int> v(size, 0);
            arr.push_back(v);
        }
    } else {
        return arr;
    }

    return arr;
}