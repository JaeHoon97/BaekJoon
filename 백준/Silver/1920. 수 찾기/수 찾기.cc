#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;

    cin >> n;

    long long arr1[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr1, arr1 + n);

    cin >> m;

    long long arr2[m];

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < m; i++) {
        if(binary_search(arr1, arr1+n, arr2[i])){
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}