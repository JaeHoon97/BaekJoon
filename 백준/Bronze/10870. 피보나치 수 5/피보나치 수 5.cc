#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n >= 2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    } else {
        return n;
    }

}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}