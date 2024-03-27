#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;

    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (prev_permutation(arr.begin(), arr.end())) {
        for (const auto& num : arr) {
            cout << num << ' ';
        }
    } else {
        cout << -1;
    }
    cout << '\n';


    return 0;
}
