#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string str1, str2;

    cin >> str1;
    str2 = str1;
    reverse(str2.begin(), str2.end());

    if (str1.find(str2) != string::npos) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
