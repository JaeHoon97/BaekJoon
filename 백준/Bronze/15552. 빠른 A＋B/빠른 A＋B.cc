#include <iostream>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count, a, b;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
        }

    return 0;
}
