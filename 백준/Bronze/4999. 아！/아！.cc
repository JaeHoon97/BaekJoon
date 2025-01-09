// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str1, str2;

    cin >> str1 >> str2;

    if(str1.size() >= str2.size()) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}