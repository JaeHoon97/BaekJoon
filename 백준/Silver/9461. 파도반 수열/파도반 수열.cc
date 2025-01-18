#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N;
long long arr[105];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    arr[1] = arr[2] = arr[3] = 1;
    arr[4] = arr[5] = 2;
    arr[6] = 3;
    arr[7] = 4;
    arr[8] = 5;

    for (int i = 9; i <= 100; i++) {
        arr[i] = arr[i - 1] + arr[i - 5];
    }

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << arr[N] << '\n';
    }

    return 0;
}