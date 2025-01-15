#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str, result = "";
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'X') {
            cnt++;
        } else {
            if (cnt % 2 != 0) {
                break;
            } else {
                cnt == 0 ? result += "." : result += "BB.";
                cnt = 0;
            }
        }

        if (cnt == 4) {
            result += "AAAA";
            cnt = 0;
        }
    }

    if (cnt % 2 != 0) {
        cout << -1 << '\n';
    } else {
        if (cnt == 2) {
            result += "BB";
        }
        cout << result << '\n';
    }

    return 0;
}