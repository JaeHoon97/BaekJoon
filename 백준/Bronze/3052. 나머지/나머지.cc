#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    vector<int> v;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        v.push_back(num % 42);
    }

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << endl;

    return 0;
}
