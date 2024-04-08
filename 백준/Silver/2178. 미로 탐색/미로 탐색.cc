#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int Y = 0, X = 0;                 // 현재 좌표.
int ySize = 0, xSize = 0;         // 2차원 배열 사이즈.
int arr[101][101];                // 2차원 배열.
int visited[101][101];            // 방문처리, 가중치 배열
const int dy[4] = {-1, 0, 1, 0};  // y축 이동방향 세팅.
const int dx[4] = {0, 1, 0, -1};  // x축 이동방향 세팅.
queue<pair<int, int>> q;          // bfs를 사용하기 위한 큐.

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> ySize >> xSize;  // 2차원 배열의 사이즈.

    for (int i = 0; i < ySize; i++) {  // 2차원 배열 입력.
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            arr[i][j] = str[j] - '0';
        }
    }

    visited[0][0] = 1;  // 출발지를 방문처리, 가중치 1.
    q.push({0, 0});

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];

            if (ny < 0 || ny >= ySize || nx < 0 || nx >= xSize) {  // 2차원 배열의 범위를 벗어나는 경우
                continue;
            }
            if (arr[ny][nx] == 0 || visited[ny][nx]) {  // 방문처리된 경우
                continue;
            }
            visited[ny][nx] = visited[p.first][p.second] + 1;
            q.push({ny, nx});  // 갈 수 있는 좌표를 큐에 삽입.
        }
    }

    cout << visited[ySize - 1][xSize - 1] << '\n';

    return 0;
}