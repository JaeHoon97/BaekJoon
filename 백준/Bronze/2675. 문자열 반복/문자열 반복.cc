#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t, r;          // 테스트 케이스 t, 반복 횟수 r
    string str;        // 반복할 문자열 str
    vector<string> v;  // 완성된 문자열 v

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> r >> str;

        string str2;

        for (int j = 0; j < (str.length() * r); j++) {
            str2.push_back(str[j / r]);
        }
        v.push_back(str2);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }

    return 0;
}
