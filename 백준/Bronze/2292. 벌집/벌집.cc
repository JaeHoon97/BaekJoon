#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int room = 1;
    int num, point = 6;
    int start = 0, end = 1;

    cin >> num;

    while (true) {
        if (start <= num && num <= end) {
            break;
        } else {
            start = end + 1;
            end = end + point;
            point += 6;
            room += 1;
        }
    }

    cout << room << endl;

        return 0;
}
