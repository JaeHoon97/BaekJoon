#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int width, height, result = 0;
int arr[55][55];
bool visited[55][55];
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(const int &y, const int &x) {
    visited[y][x] = true;

    for (int i = 0; i < 8; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= height || nx < 0 || nx >= width) {
            continue;
        }
        if (arr[ny][nx] == 1 && !visited[ny][nx]) {
            dfs(ny, nx);
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    while (true) {
        cin >> width >> height;

        result = 0;
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));

        if (width == 0 && height == 0) {  // 0 0이 입력될 경우
            break;                        // 종료
        }

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cin >> arr[i][j];  // 해당 좌표가 땅 또는 바다
            }
        }

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (arr[i][j] == 1 && !visited[i][j]) {
                    result++;
                    dfs(i, j);
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}