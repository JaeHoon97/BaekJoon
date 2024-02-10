#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << b - a << " " << b << endl;

    return 0;
}