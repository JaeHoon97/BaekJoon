#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
int arr[10];
vector<int> v;

void dfs(int cnt);
void print();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    dfs(0);

    return 0;
}

void dfs(int cnt) {
    if (cnt == M) {
        print();
        return;
    }

    for (int i = 0; i < N; i++) {
        v.push_back(arr[i]);
        dfs(cnt + 1);
        v.pop_back();
    }
}

void print() {
    for (auto num : v) {
        cout << num << ' ';
    }
    cout << '\n';
}