#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;

        cin >> str;

        cout << (str[0] - 48) + (str[2] - 48) << '\n';
    }

    return 0;
}
