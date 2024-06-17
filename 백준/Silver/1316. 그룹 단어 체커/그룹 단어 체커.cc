#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int check[30];
int N, result;
string str;

int checkGroupWord(const string& str);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> str;
        result += checkGroupWord(str);
        memset(check, 0, sizeof(check));
    }

    cout << result << '\n';

    return 0;
}

int checkGroupWord(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (check[str[i] - 'a'] == 0) { // 이전에 나오지 않았던 문자일 경우
            if (i == (str.length() - 1)) { // 마지막 문자일 경우
                return 1; // 그룹단어임
            } else { // 마지막 문자가 아닐 경우
                if (str[i] == str[i + 1]) { // 다음 문자랑 같을 경우
                    continue; // 체크하지 않고 그냥 패스하기
                } else { // 다음 문자랑 같지 않을 경우
                    check[str[i] - 'a'] = 1; // 나왔던 문자로 체크하기
                }
            }
        } else { // 이전에 나왔던 문자일 경우 
            return 0; // 그룹단어가 아님
        }
    }
    return 1;
}
