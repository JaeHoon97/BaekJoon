#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int T, N, M, a, b, cnt;
vector<int> adj[1005];         // 인접리스트
vector<int> visited(1005, 0);  // 방문 체크 벡터

void go(const int &current) {
    visited[current] = 1;

    for (auto next : adj[current]) {
        if (visited[next] == 0) {
            cnt++;
            go(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> T;  // 테스트 케이스 입력

    for (int i = 0; i < T; i++) {
        cin >> N >> M;  // 국가의 수와 비행기의 종류 입력

        cnt = 0;  // 비행기 종류의 최소 개수 초기화
        memset(adj, 0, sizeof(adj));
        fill(visited.begin(), visited.end(), 0); // 방문 배열 초기화

        for (int j = 0; j < M; j++) {
            cin >> a >> b;  // 쌍으로 연결된 a와 b국가 입력
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for (int k = 1; k <= N; k++) {
            if (visited[k] == 0) {
                go(k);
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
