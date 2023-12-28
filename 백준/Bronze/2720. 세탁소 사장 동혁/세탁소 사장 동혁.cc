#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int cnt, money;  // 잔돈을 받을 횟수, 받을 잔돈
    int arr[4] = {0};

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        cin >> money;

        arr[0] = money / 25;
        arr[1] = (money % 25) / 10;
        arr[2] = ((money % 25) % 10) / 5;
        arr[3] = (((money % 25) % 10) % 5) / 1;

        for (int j = 0; j < 4; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
