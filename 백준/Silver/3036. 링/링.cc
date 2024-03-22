#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v;
    int N, num;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }

    for (int i = 1; i < N; i++) {
        const int GCD = gcd(v[0], v[i]);
        cout << v[0] / GCD << "/" << v[i] / GCD << '\n';
    }

    return 0;
}
