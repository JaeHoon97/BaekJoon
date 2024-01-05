#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, num, result = 0;

    cin >> n;

    num = n;

    while (true) {
        int sum = (num / 10) + (num % 10);
        int right = (num % 10);
        num = (right * 10) + (sum % 10);
        result++;
        if (n == num) {
            break;
        }
    }

    cout << result << '\n';

    return 0;
}
