// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long GCD(int a, int b) {
    while(b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, size;
        long long sum = 0;
        vector<int> v;

        cin >> n;

        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            v.push_back(num);
        }

        size = v.size();

        for (int k = 0; k < size - 1; k++) {
            for (int l = k + 1; l < size; l++) {
                sum += (v[k] > v[l]) ? GCD(v[k], v[l]) : GCD(v[l], v[k]);
            }
        }

        cout << sum << '\n';
    }

    return 0;
}