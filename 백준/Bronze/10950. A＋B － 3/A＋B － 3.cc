#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int cnt, a, b;
    vector<int> v;

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        cin >> a >> b;
        v.push_back(a + b);
    }

    for (int i = 0; i < cnt; i++) {
        cout << v[i] << endl;
    }

    return 0;
}