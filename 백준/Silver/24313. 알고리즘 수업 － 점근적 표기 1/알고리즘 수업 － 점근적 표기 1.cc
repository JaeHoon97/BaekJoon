#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a1, a0, c, n0,result = 1;

    cin >> a1 >> a0 >> c >> n0;

    for(int i = n0;i<=100;i++) {
        if((a1 * i + a0) > (c * i)) {
            result = 0;
            break;
        }
    }

    cout << result << '\n';

    return 0;
}