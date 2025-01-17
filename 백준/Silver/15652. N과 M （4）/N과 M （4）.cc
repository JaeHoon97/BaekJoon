#include <algorithm>
#include <iostream>

using namespace std;

int N, M, start;
vector<int> v;

void f() {
    if (v.size() == M) {
        for (int i = 0; i < v.size(); i++) {
            (i != v.size() - 1) ? cout << v[i] << ' ' : cout << v[i] << '\n';
        }
        return;
    }

    start = v.empty() ? 1 : v.back();

    for (int i = start; i <= N; i++) {
        v.push_back(i);
        f();
        v.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    f();

    return 0;
}