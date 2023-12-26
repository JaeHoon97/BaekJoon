#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string str;
    int maxValue, index;
    vector<int> arr(26, 0);

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (97 <= str[i] && str[i] <= 122) {
            str[i] = (str[i] - 32);
        }
        arr[str[i] - 65] += 1;
    }

    maxValue = *max_element(arr.begin(), arr.end());

    for (int i = 0; i < 26; i++) {
        if (arr[i] == maxValue) {
            index = i;
        }
    }

    sort(arr.begin(), arr.end());

    if (arr[24] == arr[25]) {
        cout << '?' << endl;
    } else {
        cout << char('A' + index) << endl;
    }

    return 0;
}
