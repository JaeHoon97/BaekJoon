#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str, originStr, reverseStr;

    cin >> str;

    while(str != "0") {
        
        originStr = str;
        
        reverse(str.begin(), str.end());

        (originStr == str ) ? cout << "yes" << '\n' : cout << "no" << '\n';
        
        cin >> str;
    }


    return 0;
}