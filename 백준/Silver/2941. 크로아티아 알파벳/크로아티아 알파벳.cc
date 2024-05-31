#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string str;

    cin >> str;

    for (int i = 0; i < 8; i++) {
        while (true) {
            if (str.find(croatia[i]) != string::npos) {  // 문자열을 찾았을 때
                str.replace(str.find(croatia[i]), croatia[i].size(), "#");
            } else {
                break;
            }
        }
    }

    cout << str.length() << '\n';

    return 0;
}
