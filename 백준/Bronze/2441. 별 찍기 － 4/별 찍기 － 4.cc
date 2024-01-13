#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            (i <= j) ? cout << '*' : cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}