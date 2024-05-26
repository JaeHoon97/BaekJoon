#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

long long N, cnt, result;
long long num;
map<long long, int> m;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
    }

    for (auto it = m.begin(); it != m.end(); it++) {
        if ((it->second) > cnt) {
            cnt = it->second;
            result = it->first;
        }
    }

    cout << result << '\n';

    return 0;
}