#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, m;

    cin >> n >> m;

    int arr1[n][m], arr2[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
