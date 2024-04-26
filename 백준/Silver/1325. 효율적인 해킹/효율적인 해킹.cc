#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int N, M, cnt;
vector<int> adj[10001];
int visited[10001];
int result[10001];
set<int> s;

void dfs(const int& index);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        adj[B].push_back(A);
    }

    for (int i = 1; i <= N; i++) {
        if (!adj[i].empty() && visited[i] == 0) {
            visited[i] = 1;
            cnt++;
            dfs(i);
        }
        result[i] = cnt;
        cnt = 0;
        memset(visited, 0, sizeof(visited));
    }

    int max = *max_element(result, result + N + 1);

    for (int i = 0; i <= N; i++) {
        if (max == result[i]) {
            s.insert(i);
        }
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << ' ';
    }

    cout << '\n';

    return 0;
}

void dfs(const int& index) {
    for (const int next : adj[index]) {
        if (visited[next] == 0) {
            visited[next] = 1;
            cnt++;
            dfs(next);
        }
    }
}
