#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string num1, num2;

    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    stoi(num1) >= stoi(num2) ? (cout << num1 << endl) : (cout << num2 << endl);

    return 0;
}
