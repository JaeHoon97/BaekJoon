#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {

    int size = arr.size();
    int x = 1, add;

    while (size > x) {
        x *= 2;
    }

    add = x - size;

    for (int i = 0; i < add; i++) {
        arr.push_back(0);
    }

    return arr;
}