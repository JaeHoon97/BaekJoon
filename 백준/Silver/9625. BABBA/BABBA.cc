#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    pair<int, int> before, after, temp;
    int k;

    cin >> k;

    before = {1, 0};
    after = {0, 1};

    for (int i = 2; i <= k; i++) {
        temp = after; 
        after.first += before.first, after.second += before.second;
        before = temp;
    }

    cout << after.first << " " << after.second << endl;

    return 0;
}