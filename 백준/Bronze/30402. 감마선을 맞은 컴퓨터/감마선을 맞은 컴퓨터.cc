#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    char arr[15][15];

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (arr[i][j] == 'w') {
                i = 16;
                cout << "chunbae" << '\n';
                break;
            } else if (arr[i][j] == 'b') {
                i = 16;
                cout << "nabi" << '\n';
                break;
            } else if (arr[i][j] == 'g') {
                i = 16;
                cout << "yeongcheol" << '\n';
                break;
            }
        }
    }

    return 0;
}
