#include <iostream>
using namespace std;

int main() {
    int N, jimin, hansu;
    cin >> N >> jimin >> hansu;

    int round = 0;
    
    while (jimin != hansu) {
        jimin = (jimin + 1) / 2;
        hansu = (hansu + 1) / 2;
        round++;
    }

    cout << round << endl;
    return 0;
}
