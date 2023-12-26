#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int arr1[6] = {0}, result[6] = {0};
    int arr2[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        cin >> arr1[i];
        result[i] = arr2[i] - arr1[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}
