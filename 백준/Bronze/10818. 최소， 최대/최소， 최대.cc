#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);

    int count;
    vector<int> v;

    cin >> count;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << endl;

    return 0;
}
