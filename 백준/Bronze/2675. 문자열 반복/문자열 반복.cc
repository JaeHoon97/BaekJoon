
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, r;          // 테스트 케이스 t, 반복 횟수 r
    string str;        // 반복할 문자열 str
    vector<string> v;  // 완성된 문자열 v

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> r >> str;

        string s;

        for (int j = 0; j < str.length(); j++) {
            for (int k = 0; k < r; k++) {
                s.push_back(str[j]);
            }
        }
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
