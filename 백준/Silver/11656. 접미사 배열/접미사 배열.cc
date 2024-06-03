#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;
    set<string> s;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        s.insert(str.substr(i, str.length() - i));
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << '\n';
    }

    return 0;
}

/*
1. 문자열을 입력 받는다.
2. substr()로 문자열의 부분만 추출하고 출력한다.
3. set애 문자열의 순서대로 저장한다.
4. substr(index, n)은 index부터 n개를 추출한 부분문자열
5. 규칙은 (0, length-0), (1, length-1), (2, length-2), ... (length-1, length-(length-1))
*/
