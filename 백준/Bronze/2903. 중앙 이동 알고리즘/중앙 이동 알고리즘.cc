#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int calPow(int x, int y) {
    int num = 1;
    for (int i = 0; i < y; i++) {
        num = num * x;
    }
    return num;
}

int main(void) {
    int num;

    cin >> num;

    cout << calPow((calPow(2, num) + 1), 2) << endl;

    return 0;
}
