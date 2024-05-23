#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;
    long long sum = 0;
    bool flag = false;

    cin >> str;

    sort(str.begin(), str.end(), greater<>());

    for (int i = 0; i < str.size(); i++) {
        int num = str[i] - '0';
        if (num == 0) {
            flag = true;
        }
        sum += num;
    }

    if (flag && (sum % 3 == 0)) {
        cout << str << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
