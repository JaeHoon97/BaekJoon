#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int word[26] = {0};
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int index = str[i] - 97;
        word[index]++;
    }

    for (int i = 0; i < 26; i++) {
        cout << word[i] << " ";
    }

    return 0;
}