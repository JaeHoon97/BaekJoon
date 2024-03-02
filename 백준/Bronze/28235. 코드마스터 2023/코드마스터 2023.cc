#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;

    cin >> str;

    if( str == "SONGDO" ) {
        cout << "HIGHSCHOOL" << endl;
    } else if ( str == "CODE") {
        cout << "MASTER" << endl;
    } else if ( str == "2023") {
        cout << "0611" << endl;
    } else {
        cout << "CONTEST" << endl;
    }

    return 0;
}