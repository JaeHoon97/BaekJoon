#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int switchSize, studentSize;
    int arr[105] = {0};

    cin >> switchSize;

    for (int i = 0; i < switchSize; i++) {
        int num;
        cin >> num;
        arr[i + 1] = num;
    }

    cin >> studentSize;

    for (int i = 0; i < studentSize; i++) {
        int gender, num;
        cin >> gender >> num;

        if (gender == 1) {
            for (int i = 1; num * i <= switchSize; i++) {
                (arr[num * i] == 1) ? arr[num * i] = 0 : arr[num * i] = 1;
            }
        } else {
            int i = 1;
            while (true) {
                if ((num - i < 1) || (switchSize < num + i)) {
                    break;
                }
                if ((arr[num - i]) != (arr[num + i])) {
                    break;
                }
                arr[num - i] == 1 ? arr[num - i] = 0 : arr[num - i] = 1;
                arr[num + i] == 1 ? arr[num + i] = 0 : arr[num + i] = 1;
                i++;
            }
            arr[num] == 1 ? arr[num] = 0 : arr[num] = 1;
        }
    }

    for (int i = 1; i <= switchSize; i++) {
        cout << arr[i];
        if (i % 20 == 0 || i == switchSize) {  // 20개마다 개행 또는 마지막 개행 처리
            cout << '\n';
        } else {
            cout << ' ';
        }
    }

    return 0;
}