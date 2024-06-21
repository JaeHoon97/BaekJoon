#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    string str, token;
    getline(cin, str); getline(cin, token);
    int cnt = 0; int start = 0;
    while (str.find(token) != string::npos)
    {
        int firstCharPos = str.find(token);cnt++;
        str = str.substr(firstCharPos+token.length(), str.length());
    }
    cout << cnt << '\n';
    return 0;
}