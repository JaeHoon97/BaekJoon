#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;
    int count = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
        count++;
        if (count % 10 == 0) {
            cout << '\n';
        }
    }

    return 0;
}