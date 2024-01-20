#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;

    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        (65 <= str[i] && str[i] <= 90) ? (str[i] += 32) : (str[i] -= 32);
    }

    cout << str << endl;

    return 0;
}
