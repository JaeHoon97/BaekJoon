/*
    - 문제
        비밀번호 생성기를 만들어야 된다.
        비밀번호는 크기는 1 ~ 20이고 대문자는 없다.
        조건
            1. 모음을 하나이상 반드시 포함.
            2. 모음이 연속 3개 또는 자음이 연속 3개 오면 안 된다.
            3. 같은 글자가 연속으로 2개 오면 안 된다. 그러나 ee와 oo는 허용한다.
    - 자료구조
        map, vector,
    - 복잡도

*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string str;
bool flag;
void vowelCheck(const string& str);
void doubleCheck(const string& str);
void consonantAndVowelCheck(const string& str);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    while (cin >> str) {
        if (str == "end") {
            break;
        }

        flag = true;

        vowelCheck(str);

        doubleCheck(str);

        consonantAndVowelCheck(str);

        if (flag) {
            cout << "<" << str << "> is acceptable." << '\n';
        } else {
            cout << "<" << str << "> is not acceptable." << '\n';
        }
    }

    return 0;
}

void vowelCheck(const string& str) {
    int arr[26] = {0};

    for (const auto& c : str) {
        arr[c - 97] = 1;
    }

    if (!arr['a' - 97] && !arr['e' - 97] && !arr['i' - 97] && !arr['o' - 97] && !arr['u' - 97]) {
        flag = false;  // 비밀번호로 금지
    }
}

void doubleCheck(const string& str) {
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {                // 같은 글자가 연속으로 올 경우
            if (str[i] != 'e' && str[i] != 'o') {  // e도 아니고 o도 아닐 경우
                flag = false;                      // 비밀번호로 금지
                return;
            }
        }
    }
}

void consonantAndVowelCheck(const string& str) {
    int size = str.size();
    vector<int> v(size, 0);
    for (int i = 0; i < size; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            v[i] = 1;
        } else {
            v[i] = -1;
        }
    }
    for (int i = 0; i < size - 2; i++) {
        if (v[i] + v[i + 1] + v[i + 2] == 3 || v[i] + v[i + 1] + v[i + 2] == -3) {
            flag = false;
            return;
        }
    }
}
