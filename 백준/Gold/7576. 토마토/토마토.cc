#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool isFull = true;
int N, M, result;
int arr[1005][1005], visited[1005][1005];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs();
int check();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> M >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                q.push({i, j});
                visited[i][j] = 1;
            }
            if (arr[i][j] == 0) {
                isFull = false;
            }
        }
    }

    if (isFull) {
        cout << 0 << '\n';
    } else {
        bfs();
        check() ? cout << result - 1 << '\n' : cout << -1 << '\n';
    }

    return 0;
}

void bfs() {
    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= N || nx >= M) {
                continue;
            }
            if (visited[ny][nx] || arr[ny][nx] == -1) {
                continue;
            }
            q.push({ny, nx});
            visited[ny][nx] = 1;
            arr[ny][nx] = arr[y][x] + 1;
        }
    }
}

int check() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 0) {
                return 0;
            }
            result = max(result, arr[i][j]);
        }
    }
    return 1;
}