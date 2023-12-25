#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    string str;  // 주어지는 단어 str
    vector<int> v(26, -1);

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        int index = str[i] - 'a';
        if (v[index] == -1) {
            v[index] = i;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
// b a e k j o o n
// 1 0 4 10