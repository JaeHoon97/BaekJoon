#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (next_permutation(arr, arr + N)) {
        for (const auto& num : arr) {
            cout << num << ' ';
        }

    } else {
        cout << -1;
    }
    cout << '\n';

    return 0;
}
