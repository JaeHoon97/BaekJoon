#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string pattern;
    vector<string> v(2);
    int N;

    cin >> N >> pattern;

    const int index = pattern.find('*');             // 별표가 있는 인덱스.
    const string left = pattern.substr(0, index);    // 별표 기준으로 왼쪽 문자.
    const string right = pattern.substr(index + 1);  // 별표 기준으로 오른쪽 문자.

    cin.ignore();

    for (int i = 0; i < N; i++) {
        string str;
        getline(cin, str);  // 문자열 입력

        v[0] = (str.substr(0, left.size()));  // v[0] : 입력받은 문자열을 left의 사이즈만큼 뽑고 저장.
        str.erase(0, left.size());            // 입력받은 문자열을 left의 사이즈만큼 제거.
        reverse(str.begin(), str.end());  // 입력받은 문자열을 뒤집기.
        v[1] = (str.substr(0, right.size()));  // v[1] : 입력받은 문자열을 right의 사이즈만큼 뽑고 저장
        reverse(v[1].begin(), v[1].end());     // 뒤집어서 저장한 문자열이기 때문에 다시 뒤집어서 원복.
        str.erase(0, right.size());            // 입력받은 문자열을 right의 사이즈만큼 제거.
        reverse(str.begin(), str.end());       // 뒤집어서 저장한 문자열이기 때문에 다시 뒤집어서 원복.

        if (v[0] == left && v[1] == right) {
            cout << "DA" << '\n';
        } else {
            cout << "NE" << '\n';
        }
    }
    
    return 0;
}