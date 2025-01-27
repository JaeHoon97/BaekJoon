#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {

    for (int i = 0; i < query.size(); i++) {
        if (i % 2 == 0) {
            int size = query[i] + 1;
            vector<int> temp(arr.begin(), arr.begin() + size);
            arr = temp;
        } else {
            int size = query[i];
            vector<int> temp(arr.begin() + size, arr.end());
            arr = temp;
        }
    }

    return arr;
}