#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        int point = 0, sum = 0;
        for (int j = 0; j < v[i].length(); j++) {
            if (v[i][j] == 'O') {
                point++;
                sum += point;
            } else {
                point = 0;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}