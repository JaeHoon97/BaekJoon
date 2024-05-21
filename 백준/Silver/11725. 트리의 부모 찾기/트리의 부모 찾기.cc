#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, here, there, root = 1;
int visited[100010], check[100010];
vector<int> v[100010];

void dfs(int parentNode);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N-1; i++) {
        cin >> here >> there;
        v[here].push_back(there);
        v[there].push_back(here);
    }

    visited[root] = 1;
    dfs(root);

    for (int i = 2; i <= N; i++) {
        cout << check[i] << '\n';
    }
    cout << '\n';

    return 0;
}

void dfs(int parentNode) {
    for (auto childNode : v[parentNode]) {
        if (visited[childNode] == 1) {
            continue;
        }
        check[childNode] = parentNode;
        visited[childNode] = 1;
        dfs(childNode);
    }
}
