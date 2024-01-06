#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a, b, c, num;
    int arr[10] = {0};

    cin >> a >> b >> c;

    num = a * b * c;

    // 17037300
    while (num != 0) {
        arr[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}
