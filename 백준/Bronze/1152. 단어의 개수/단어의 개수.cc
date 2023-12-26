#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string str;
    int count = 0;

    getline(cin, str);

    for (int i = 0; i < str.length() - 1; i++) {  // 문자열의 단어의 개수 카운트 +1
        if (str[i] != ' ' && str[i + 1] == ' ') {
            count = count + 1;
        }
    }

    if (str.back() != ' ') {
        count += 1;
    }

    cout << count << endl;

    return 0;
}
