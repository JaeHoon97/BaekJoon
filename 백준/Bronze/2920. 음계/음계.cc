#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v(8);
    string result;

    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < 7; i++) {
        if (v[0] == 1) {
            if (v[i + 1] == v[i] + 1) {
                result = "ascending";
            } else {
                result = "mixed";
                break;
            }
        } else if (v[0] == 8) {
            if (v[i + 1] == v[i] - 1) {
                result = "descending";
            } else {
                result = "mixed";
                break;
            }
        } else {
            result = "mixed";
        }
    }

    cout << result << '\n';

    return 0;
}
