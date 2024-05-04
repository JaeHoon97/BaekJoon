#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int W, H, cnt, maxValue, result;
char arr[55][55];
int visited[55][55];
int score[55][55];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < W; j++) {
            arr[i][j] = str[j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (arr[i][j] == 'L') {
                visited[i][j] = 1;
                q.push({i, j});

                while (!q.empty()) {
                    int y = q.front().first;
                    int x = q.front().second;

                    q.pop();

                    for (int i = 0; i < 4; i++) {
                        int ny = y + dy[i];
                        int nx = x + dx[i];

                        if (ny < 0 || ny >= H || nx < 0 || nx >= W) {
                            continue;
                        }
                        if (arr[ny][nx] == 'W' || visited[ny][nx] == 1) {
                            continue;
                        }
                        visited[ny][nx] = 1;
                        score[ny][nx] = score[y][x] + 1;
                        if (score[ny][nx] > maxValue) {
                            maxValue = score[ny][nx];
                        }
                        q.push({ny, nx});
                    }
                }
            }
            if (result < maxValue) {
                result = maxValue;
            }
            maxValue = 0;
            memset(visited, 0, sizeof(visited));
            memset(score, 0, sizeof(score));
        }
    }

    cout << result << '\n';

    return 0;
}