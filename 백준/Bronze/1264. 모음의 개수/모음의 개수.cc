#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;

    

    while (true) {
        
        getline(cin, str);

        if( str == "#") {
            break;
        }

        int count = 0;

        for (const auto& c : str) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }

        cout << count << '\n';

    }

    return 0;
}