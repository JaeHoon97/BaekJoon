#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, a, b;
    vector<int> pointX, pointY;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pointX.push_back(x);
        pointY.push_back(y);
    }

    a = *max_element(pointX.begin(), pointX.end()) - *min_element(pointX.begin(), pointX.end());
    b = *max_element(pointY.begin(), pointY.end()) - *min_element(pointY.begin(), pointY.end());

    cout << a * b << '\n';
    
    return 0;
}
