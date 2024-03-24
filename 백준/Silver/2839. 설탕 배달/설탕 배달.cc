#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    const int FIVE = 5, THREE = 3;
    int N, countFive, countThree, sum = -1;

    cin >> N;

    countFive = N / FIVE;

    for (int i = countFive; i >= 0; i--) {
        int remain = N - (FIVE * i);
        if (remain % THREE == 0) {
            countThree = remain / THREE;
            sum = i + countThree;
            break;
        }
    }

    cout << sum << '\n';

    return 0;
}