#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Hello World, Judge " << i+1 << "!" << endl;
    }

    return 0;
}
