#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int T, N;
vector<pair<long long, long long>> fibo(45, {0, 0});

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    fibo[0] = {1, 0};
    fibo[1] = {0, 1};

    for (int i = 2; i <= 40; i++) {
        fibo[i].first = fibo[i - 1].first + fibo[i - 2].first;
        fibo[i].second = fibo[i - 1].second + fibo[i - 2].second;
    }

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << fibo[N].first << " " << fibo[N].second << '\n';
    }

    return 0;
}