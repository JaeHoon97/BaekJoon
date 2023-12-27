#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<string> v;
    string result = "";

    for (int i = 0; i < 5; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[j][i] != '\0') {
                result += v[j][i];
            }
        }
    }

    cout << result << endl;

    return 0;
}
