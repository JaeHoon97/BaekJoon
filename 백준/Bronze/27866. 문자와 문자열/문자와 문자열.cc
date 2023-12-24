#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);

    string s;
    int i;

    getline(cin, s);
    cin >> i;

    cout << s[i - 1] << endl;

    return 0;
}
