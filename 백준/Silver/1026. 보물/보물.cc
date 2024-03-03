#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, value, sum = 0;
    
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> value;
        a[i] = (value);
    }

    for (int i = 0; i < n; i++) {
        cin >> value;
        b[i] = (value);
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        sum += (a[i] * b[i]);
    }

    cout << sum << '\n';

    return 0;
}
