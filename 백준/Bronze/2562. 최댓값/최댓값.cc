#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    vector<int> v;
    int max, index;

    for (int i = 0; i < 9; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    max = *max_element(v.begin(), v.end());

    for (int i = 0; i < 9; i++) {
        if (max == v[i]) {
            index = i;
        }
    }

    cout << max << endl;
    cout << index + 1 << endl;

    return 0;
}