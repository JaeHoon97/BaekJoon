#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int m, n, x = 1, sum = 0;
    vector<int> v;

    cin >> m >> n;

    while (true) {
        int y = pow(x, 2);
        if (m <= y && y <= n) {
            v.push_back(y);
            sum += y;
        }
        x++;
        if (y > n) {
            break;
        }
    }
    if(v.size() != 0){
        cout << sum << '\n' << v[0] << '\n';
    } else {
        cout << -1 << '\n';
    }
    

    return 0;
}