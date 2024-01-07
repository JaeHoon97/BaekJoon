#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    char arr[8][8] = {' '};
    int white = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> arr[i][j];
            if (i % 2 == 0 && j % 2 == 0 && arr[i][j] == 'F') {
                white++;
            }
            if (i % 2 != 0 && j % 2 != 0 && arr[i][j] == 'F') {
                white++;
            }
        }
    }

    cout << white << '\n';

    return 0;
}