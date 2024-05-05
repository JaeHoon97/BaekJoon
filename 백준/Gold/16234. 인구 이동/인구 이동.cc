#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int N, L, R, sum, cnt, result;
int arr[55][55], visited[55][55];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;
bool flag = false;

void dfs(const int& y, const int& x);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> L >> R;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    while (true) {
        flag = false;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (visited[i][j] == 0) {
                    visited[i][j] = 1;
                    sum += arr[i][j];
                    cnt++;
                    v.push_back({i, j});
                    dfs(i, j);
                    for (const auto& p : v) {
                        arr[p.first][p.second] = sum / cnt;
                    }
                    sum = 0, cnt = 0;
                    v.clear();
                }
            }
        }
        result++;
        memset(visited, 0, sizeof(visited));
        if(flag == false){
            break;
        }
    }

    cout << result - 1 << '\n';

    return 0;
}

void dfs(const int& y, const int& x) {
    for (int k = 0; k < 4; k++) {
        int ny = y + dy[k];
        int nx = x + dx[k];
        if (ny < 0 || ny >= N || nx < 0 || nx >= N) {
            continue;
        }
        if (visited[ny][nx] == 1) {
            continue;
        }
        if (abs(arr[ny][nx] - arr[y][x]) < L || abs(arr[ny][nx] - arr[y][x]) > R) {
            continue;
        }
        flag = true;
        visited[ny][nx] = 1;
        sum += arr[ny][nx];
        cnt++;
        v.push_back({ny, nx});
        dfs(ny, nx);
    }
}
