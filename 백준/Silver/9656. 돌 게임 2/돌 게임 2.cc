#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int num;

    cin >> num;

    num % 2 == 1 ? cout << "CY" << '\n' : cout << "SK" << '\n';

    return 0;
}