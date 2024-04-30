#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int N, root, result, eraseNode;
vector<int> adj[55];
int visited[55];

void dfs(const int& parentNode);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num == -1) {
            root = i;
        } else {
            adj[num].push_back(i);
        }
    }

    cin >> eraseNode;

    if (root == eraseNode) {
        result = 0;
    } else {
        visited[root] = 1;
        visited[eraseNode] = 1;
        dfs(root);
    }

    cout << result << '\n';

    return 0;
}

void dfs(const int& parentNode) {

    if (adj[parentNode].empty()) {
        result++;
        return;
    }

    if (adj[parentNode].size() == 1 && adj[parentNode].front() == eraseNode) {
            result++;
            return;
    }

    for (const auto& childNode : adj[parentNode]) {
        if (visited[childNode] == 1) {
            continue;
        }
        visited[childNode] = 1;
        dfs(childNode);
    }
}
