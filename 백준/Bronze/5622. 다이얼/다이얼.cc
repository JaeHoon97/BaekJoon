#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string tell, num = "";
    int sum = 0;

    cin >> tell;

    for (int i = 0; i < tell.length(); i++) {
        switch (tell[i]) {
            case 'A': case 'B':case 'C':
                num.push_back('2');
                break;
            case 'D': case 'E':case 'F':
                num.push_back('3');
                break;
            case 'G': case 'H':case 'I':
                num.push_back('4');
                break;
            case 'J': case 'K':case 'L':
                num.push_back('5');
                break;
            case 'M': case 'N':case 'O':
                num.push_back('6');
                break;
            case 'P': case 'Q':case 'R':case 'S':
                num.push_back('7');
                break;
            case 'T': case 'U':case 'V':
                num.push_back('8');
                break;
            case 'W': case 'X': case 'Y':case 'Z':
                num.push_back('9');
                break;
            default:
                break;
        }
    }

    for(int i=0;i<num.length();i++){
        sum += (num[i] - 48 + 1);
    }

    cout << sum << endl;

    return 0;
}
