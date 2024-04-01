#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string name, result, reverseWord, oddWord;
    int word[26] = {0};
    int odd = 0;

    cin >> name;

    for (const auto& c : name) {
        word[c - 65]++;
    }

    for (int i = 0; i < 26; i++) {
        if ((word[i] % 2) != 0) {
            odd++;
        }
    }

    if (odd == 0) {
        for (int i = 0; i < 26; i++) {
            while (word[i] != 0) {
                result += (65 + i);
                word[i] -= 2;
            }
        }
        reverseWord = result;
        reverse(reverseWord.begin(), reverseWord.end());
        cout << result + reverseWord << endl;
    } else if (odd == 1) {
        for (int i = 0; i < 26; i++) {
            if ((word[i] % 2) != 0) {
                oddWord = i + 65;
                word[i]--;
            }
        }
        for (int i = 0; i < 26; i++) {
            while (word[i] != 0) {
                result += (65 + i);
                word[i] -= 2;
            }
        }
        reverseWord = result;
        reverse(reverseWord.begin(), reverseWord.end());
        cout << result + oddWord + reverseWord << endl;

    } else {
        cout << "I'm Sorry Hansoo" << '\n';
    }

    return 0;
}