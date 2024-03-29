#include <algorithm>
#include <iostream>

using namespace std;

int A, B, C, in, out, price;
int result[101];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++) {
        cin >> in >> out;
        for (int i = in; i < out; i++) {
            result[i]++;
        }
    }

    for (const auto& num : result) {
        if (num == 1) {
            price += num * A;
        } else if (num == 2) {
            price += num * B;
        } else if (num == 3) {
            price += num * C;
        } else {
            continue;
        }
    }

    cout << price << '\n';

    return 0;
}