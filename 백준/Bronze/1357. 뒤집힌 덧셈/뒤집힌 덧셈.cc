#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string x, y, temp;
    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    temp = to_string(stoi(x) + stoi(y));
    reverse(temp.begin(), temp.end());
    cout << stoi(temp);

}