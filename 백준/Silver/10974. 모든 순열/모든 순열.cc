#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = i+1;
    }

    do {
        for (auto it = arr; it != arr+N; it++) {
            cout << *it << ' ';
        }
        cout << '\n';
    } while (next_permutation(arr, arr+N));

    return 0;
}
