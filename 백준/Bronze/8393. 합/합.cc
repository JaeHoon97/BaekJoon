#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n, sum = 0;

    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
