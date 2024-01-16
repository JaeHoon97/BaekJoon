#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        int score;

        cin >> score;

        (score > 40) ? (sum += score) : (sum += 40);
    }

    cout << sum / 5 << endl;

    return 0;
}