#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string data;
    vector<string> str;
    while (true) {
        getline(cin, data);
        if (cin.eof()) break; 
        str.push_back(data);
    }
    for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;
    return 0;
}
