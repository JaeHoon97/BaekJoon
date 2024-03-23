#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    queue<int> q;
    vector<int> v;
    int N, K, count = 1;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        if (count == K) {
            v.push_back(q.front());
            q.pop();
            count = 1;
        } else {
            q.push(q.front());
            q.pop();
            count++;
        }
    }

    cout << "<";
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << v[i];
        } else {
            cout << v[i] << ", ";
        }
    }
    cout << ">" << '\n';

    return 0;
}