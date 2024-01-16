#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int factorial(const int n) {
    if (n > 0) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}