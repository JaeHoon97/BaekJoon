#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3);

    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    if (v[0] == v[1] && v[1] == v[2]) {
        cout << v[0] + v[1] + v[2] << '\n';
    } else {
        while(v[0] + v[1] <= v[2]){
            v[2]--;
        }
        cout << v[0] + v[1] + v[2] << '\n';
    }

    return 0;
}
