#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;

    getline(cin, str);

    for (int i = 0; i != str.length(); i++) {
        if (65 <= str[i] && str[i] <= 90) {
            if (str[i] <= 77) {
                str[i] = (str[i] + 13);
            } else {
                str[i] = (str[i] - 13);
            }
        }
        if (97 <= str[i] && str[i] <= 122) {
            if (str[i] <= 109) {
                str[i] = (str[i] + 13);
            } else {
                str[i] = (str[i] - 13);
            }
        }
    }

    cout << str << endl;

    return 0;
}