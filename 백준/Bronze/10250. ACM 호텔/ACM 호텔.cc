#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testCase, height, width, visitor, hotel;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> height >> width >> visitor;

        if (visitor % height == 0) {
            hotel = (height * 100) + (visitor / height);
        } else {
            hotel = ((visitor % height) * 100) + ((visitor / height) + 1);
        }

        cout << hotel << '\n';
    }

    return 0;
}