#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[100][100];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int H, W, value;
    string str;

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        cin >> str;
        for (int j = 0; j < W; j++) {
            if (str[j] == '.') {
                arr[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W - 1; j++) {
            if ((arr[i][j] != -1) && (arr[i][j + 1] != 0)) {
                arr[i][j + 1] = arr[i][j] + 1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
