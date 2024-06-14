#include <algorithm>
#include <iostream>
#include <string>
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

    sort(v.begin(), v.end());

    for(auto n : v) {
        cout << n << ' ';
    }
    
    cout << '\n';

    return 0;
}