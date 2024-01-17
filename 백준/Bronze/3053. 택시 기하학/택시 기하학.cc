#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
#define PI 3.141592653589793
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    double r;

    cin >> r;
    cout << fixed;
    cout << setprecision(7);
    cout << PI * r * r << endl;
    cout << 2 * r * r << endl;

    return 0;
}