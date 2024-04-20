#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <cstring> //C++

using namespace std;

int H, W, cnt, meltTime;
int arr[100][100];
int visited[100][100];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;
vector<pair<int, int>> v;

void dfs();
int checkSize();
void visitedReset();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> arr[i][j];
        }
    }

    while (true) {
        cnt = checkSize();
        dfs();
        visitedReset();
        v.clear();
        meltTime++;
        if (checkSize() == 0) {
            break;
        }
        cnt = checkSize();
    }

    cout << meltTime << '\n' << cnt << '\n';

    return 0;
}

void dfs() {
    q.push({0, 0});

    visited[0][0] = 1;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int y = p.first;
        int x = p.second;

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || ny >= H || nx < 0 || nx >= W) {
                continue;
            }
            if (arr[ny][nx] == 1) {
                v.push_back({ny, nx});
            }
            if (visited[ny][nx] == 1 || arr[ny][nx] == 1) {
                continue;
            }
            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        arr[it->first][it->second] = 0;
    }
}

int checkSize() {
    int result = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (arr[i][j] == 1) {
                result++;
            }
        }
    }

    return result;
}

void visitedReset() {
    memset(visited, 0, sizeof(visited));
}