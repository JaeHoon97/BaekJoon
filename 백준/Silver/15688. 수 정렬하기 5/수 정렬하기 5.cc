#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int N, num;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(const auto e : v) {
        cout << e << '\n';
    }

    return 0;
}