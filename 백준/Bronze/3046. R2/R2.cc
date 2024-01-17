#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int r1, r2, s;

    cin >> r1 >> s;

    r2 = 2 * s - r1; 

    cout << r2  << endl;

    return 0;
}