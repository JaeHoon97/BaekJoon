#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int arr[9] = {0}, result[7];

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 9);

    do {
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            sum += arr[i];
        }
        if (sum == 100) {
            for (int i = 0; i < 7; i++) {
                result[i] = arr[i];
            }
            break;
        }

    } while (next_permutation(arr, arr + 9));

    for (const auto& num : result) {
        cout << num << '\n';
    }

    return 0;
}