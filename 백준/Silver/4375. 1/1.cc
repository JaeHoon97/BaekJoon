#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long N;

    while (cin >> N) {
        long long i = 1, count = 1;

        while (true) {
            if (i % N == 0) {
                cout << count << '\n';
                break;
            } else {
                i = ((i * 10) % N + 1 % N) % N;
                count++;
            }
        }

    }

    return 0;
}