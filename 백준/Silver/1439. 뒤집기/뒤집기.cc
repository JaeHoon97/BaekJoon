// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int barCount = 0;
    string str;

    cin >> str;

    for (int i = 0; i < str.size() - 1; i++) {
        if ((str[i] == '1' && str[i + 1] == '0') || (str[i] == '0' && str[i + 1] == '1')) {
            barCount++;
        }
    }

    if(barCount % 2 == 0) {
        cout << barCount / 2 << '\n';
    } else {
        cout << (barCount + 1) / 2 << '\n';
    }

    return 0;
}