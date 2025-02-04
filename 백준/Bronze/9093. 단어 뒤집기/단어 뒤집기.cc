#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string str, buffer, result;

        getline(cin, str);

        for (char ch : str) {
            if (ch != ' ') {
                buffer += ch;
            } else {
                reverse(buffer.begin(), buffer.end());
                result += (buffer + ch);
                buffer = "";
            }
        }

        if (!buffer.empty()) {
            reverse(buffer.begin(), buffer.end());
            result += buffer;
        }
        cout << result << '\n';
    }

    return 0;
}