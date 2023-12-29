#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int x, y;  // 두 자연수 x, y
    vector<int> arr;

    cin >> x >> y;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            arr.push_back(i);
        }
    }

    if (arr.size() < y) {
        cout << 0 << endl;
    } else {
        cout << arr[y - 1] << endl;
    }

    return 0;
}
