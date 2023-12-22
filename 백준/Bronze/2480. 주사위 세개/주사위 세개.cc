#include <iostream>
#include <string>
using namespace std;

void getFinishTime(int h, int m, int t) {}

int main(void) {
    int x, y, z, count = 0, equal, money;

    cin >> x >> y >> z;

    int arr[3] = {x, y, z};
    int bigger = arr[0];

    for (int i = 0; i < 2; i++) {  // 0 1
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] == arr[j]) {
                count += 1;
                equal = arr[i];
            }
        }
    }

    for (int i = 1; i < 3; i++) {
        if (bigger <= arr[i]) {
            bigger = arr[i];
        }
    }

    if (count == 3) {
        money = 10000 + (equal * 1000);
    } else if (count == 1) {
        money = 1000 + (equal * 100);
    } else {
        money = bigger * 100;
    }

    cout << money << endl;

    return 0;
}
