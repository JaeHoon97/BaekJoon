#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, result = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, count = 0;
        cin >> x;
        for (int j = 1; j <= x; j++) {
            if (x % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
