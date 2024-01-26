#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int carNum[5];
    int day, count = 0;

    cin >> day;

    for (int i = 0; i < 5; i++) {
        cin >> carNum[i];
        if (carNum[i] == day) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}