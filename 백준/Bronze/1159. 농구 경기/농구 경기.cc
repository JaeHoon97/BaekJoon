#include <algorithm>
#include <iostream>

using namespace std;

int N;
string name, result;
int arr[26];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> name;
        arr[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            result += char('a' + i);
        }
    }

    (result == "") ? cout << "PREDAJA" << '\n' : cout << result << '\n';

    return 0;
}