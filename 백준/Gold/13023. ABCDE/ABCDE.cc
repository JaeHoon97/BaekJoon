#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M, result;
vector<vector<int>> v;
vector<bool> visited;

void dfs(int currentNode, int depth) {
    // 깊이 우선 탐색 종료 조건
    if (result == 1) {
        return;
    }
    if (depth >= 5) {
        result = 1;
        return;
    }
    // 방문처리
    visited[currentNode] = true;

    for (int nextNode : v[currentNode]) {
        // 다음 노드가 방문하지 않은 노드라면
        if (!visited[nextNode]) {
            // 방문
            dfs(nextNode, depth + 1);
        }
    }
    // 돌아오면 방문 처리 복귀
    visited[currentNode] = false;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    // 사람의 수와 친구 관계의 수 입력
    cin >> N >> M;
    // 사람의 수 만큼 친구 관계 인접 리스트 크기 설정
    v.resize(N);
    // 사람의 수 만큼 방문 노드 인접 리스트 크기 설정
    visited.resize(N, false);
    // 친구 관계의 수 만큼 친구 리스트 저장
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        // 양방향 간선
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < N; i++) {
        if (result == 1) {
            break;
        }
        dfs(i, 1);
    }

    cout << result << '\n';

    return 0;
}
