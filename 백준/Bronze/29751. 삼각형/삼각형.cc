#include <algorithm>
#include <deque>
#include <iostream>
#include <queue>

using namespace std;

bool getDeque(deque<int> dq);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(1);

    double W, H;

    cin >> W >> H;

    cout << (W * H) * 0.5 << endl;

    return 0;
}