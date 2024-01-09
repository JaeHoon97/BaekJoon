#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    while (true) {
        string str;

        getline(cin, str);

        if (cin.eof()) {
            break;
        }

        cout << str << '\n';
    }

    return 0;
}