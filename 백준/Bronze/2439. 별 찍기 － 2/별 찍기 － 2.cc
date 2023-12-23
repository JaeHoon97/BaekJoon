#include <iostream>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;

    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j <= (num - i)) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
