#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M, V;
vector<int> adj[1005];
int visited[1005];
queue<int> q;

void bfs(const int& v);
void dfs(const int& v);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        adj[from].push_back(to);
        adj[to].push_back(from);
    }

    for (int i = 0; i < 1005; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(V);
    cout << '\n';
    memset(visited, 0, sizeof(visited));
    bfs(V);

    return 0;
}

void bfs(const int& v) {
    visited[v] = 1;
    cout << v << ' ';
    q.push(v);

    while (!q.empty()) {
        int here = q.front();
        q.pop();
        for (const auto& there : adj[here]) {
            if (visited[there]) {
                continue;
            }
            visited[there] = 1;
            cout << there << ' ';
            q.push(there);
        }
    }
    cout << '\n';
}

void dfs(const int& v) {
    int here = v;
    visited[here] = 1;
    cout << here << ' ';

    for (const auto& there : adj[here]) {
        if (visited[there]) {
            continue;
        }
        visited[there] = 1;
        dfs(there);
    }
}