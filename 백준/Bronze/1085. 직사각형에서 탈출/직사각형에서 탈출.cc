#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y, w, h;
    vector<int> v;

    cin >> x >> y >> w >> h;

    v.push_back(x - 0);
    v.push_back(y - 0);
    v.push_back(w - x);
    v.push_back(h - y);

    cout << *min_element(v.begin(), v.end()) << '\n';

    return 0;
}
