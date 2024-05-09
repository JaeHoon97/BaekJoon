#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <vector>
using namespace std;

int R, C, result = 100000000;
char arr[1005][1005];
int fireVisited[1005][1005], visited[1005][1005];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
pair<int, int> jihoon;        // 지훈이의 최초 위치
vector<pair<int, int>> fire;  // 불의 좌표들을 저장
queue<pair<int, int>> q;

bool checkSide(const pair<int, int>& p);
void input();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> R >> C;

    input();

    if (checkSide(jihoon)) {
        cout << 1 << '\n';
        return 0;
    }

    for (const auto& p : fire) {         // 여러개의 불의 위치를 뽑고
        visited[p.first][p.second] = 1;  // 방문처리
        q.push({p.first, p.second});     // 큐에 저장
    }

    while (!q.empty()) {
        int y = q.front().first, x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= R || nx >= C) {
                continue;
            }
            if (visited[ny][nx] || arr[ny][nx] == '#') {
                continue;
            }
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            fireVisited[i][j] = visited[i][j];
        }
    }

    memset(visited, 0, sizeof(visited));

    visited[jihoon.first][jihoon.second] = 1;
    q.push(jihoon);

    while (!q.empty()) {
        int y = q.front().first, x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= R || nx >= C) {
                continue;
            }
            if (visited[ny][nx] || arr[ny][nx] == '#') {
                continue;
            }
            if (fireVisited[ny][nx] != 0) {
                if (fireVisited[ny][nx] <= visited[y][x] + 1) {
                    continue;
                }
            }
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
            if (ny == 0 || nx == 0 || ny == R - 1 || nx == C - 1) {
                result = min(result, visited[ny][nx]);
            }
        }
    }

    result == 100000000 ? cout << "IMPOSSIBLE" << '\n' : cout << result << '\n';

    return 0;
}

bool checkSide(const pair<int, int>& p) {
    if (p.first == 0 || p.first == (R - 1) || p.second == 0 || p.second == (C - 1)) {
        return true;
    } else {
        return false;
    }
}

void input() {
    for (int i = 0; i < R; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < C; j++) {
            arr[i][j] = str[j];
            if (str[j] == 'J') {
                jihoon = {i, j};
            }
            if (str[j] == 'F') {
                fire.push_back({i, j});  // 불이 여러개일 수 있기에 벡터에 저장
            }
        }
    }
}
