#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int count;

    cin >> count;

    vector<string> str(count);

    for (int i = 0; i < count; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < count; i++) {
        cout << str[i].front() << str[i].back() << endl;
    }

    return 0;
}
