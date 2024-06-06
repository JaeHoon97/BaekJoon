#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
int arr[10], visited[10];
vector<int> v;

void dfs(int cnt, int before);
void print();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    dfs(0, 0);

    return 0;
}

void dfs(int cnt, int before) {
    if (cnt == M) {
        print();
        return;
    }

    for (int i = 0; i < N; i++) {
        if (visited[i]) {
            continue;
        }
        if (before > arr[i]) {
            continue;
        }
        visited[i] = 1;
        v.push_back(arr[i]);
        dfs(cnt + 1, arr[i]);
        v.pop_back();
        visited[i] = 0;
    }
}

void print() {
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';
}
