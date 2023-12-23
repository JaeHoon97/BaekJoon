#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int count;

    cin >> count;

    for (int i = 0; i < (count / 4); i++) {
        cout << "long ";
    }

    cout << "int" << endl;

    return 0;
}
