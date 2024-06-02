#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int arr[1010][1010], visited[1010][1010];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
int N, M, y, x;
queue<pair<int, int>> q;

void bfs();
void print();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                arr[i][j] = 0;
                visited[i][j] = 1;
                q.push({i, j});
            }
        }
    }

    bfs();

    print();

    return 0;
}

void bfs() {
    while (!q.empty()) {
        y = q.front().first;
        x = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M) {
                continue;
            }
            if (visited[ny][nx] || arr[ny][nx] == 0) {
                continue;
            }
            arr[ny][nx] = arr[y][x] + 1;
            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }
}

void print() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                cout << -1 << ' ';
            } else {
                cout << arr[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}

/*
    원래 0인 지점. 즉 갈수 없는 땅인 곳은 출력을 0으로 하고
    1인 지점. 즉 갈 수 있는 곳인데 주변이 0으로 둘러싸여 있어 갈 수 없게 되는 곳은 -1로 출력한다
*/
