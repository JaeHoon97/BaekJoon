#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int arr[10];

        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + 10);

        cout << arr[7] << '\n';
    }

    return 0;
}
