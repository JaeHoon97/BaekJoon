#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);

    int n, sum = 0;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0; i < n; i++) {
        sum += str[i] - 48;
    }

    cout << sum << endl;

    return 0;
}