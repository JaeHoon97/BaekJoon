#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int, int>> v, virus;
vector<vector<int>> wall;
vector<int> result;
int visited[10][10], arr[10][10];
int H, W;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void findPointZero();
void combinationOfPointZero(const int& size);
void dfs(int y, int x);
void addResult();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                virus.push_back({i, j});
            }
        }
    }

    findPointZero();
    combinationOfPointZero(v.size());

    for (int i = 0; i < wall.size(); i++) {
        arr[v[wall[i][0]].first][v[wall[i][0]].second] = 1;
        arr[v[wall[i][1]].first][v[wall[i][1]].second] = 1;
        arr[v[wall[i][2]].first][v[wall[i][2]].second] = 1;

        for (int j = 0; j < virus.size(); j++) {
            dfs(virus[j].first, virus[j].second);
        }

        addResult();

        memset(visited, 0, sizeof(visited));

        arr[v[wall[i][0]].first][v[wall[i][0]].second] = 0;
        arr[v[wall[i][1]].first][v[wall[i][1]].second] = 0;
        arr[v[wall[i][2]].first][v[wall[i][2]].second] = 0;
    }

    cout << *max_element(result.begin(), result.end()) << '\n';


    return 0;
}

void findPointZero() {
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (arr[i][j] == 0) {
                v.push_back({i, j});
            }
        }
    }
}

void combinationOfPointZero(const int& size) {
    vector<int> permu(size, 0);
    permu[size - 1] = 1, permu[size - 2] = 1, permu[size - 3] = 1;

    do {
        vector<int> index;

        for (int i = 0; i < permu.size(); i++) {
            if (permu[i] == 1) {
                index.push_back(i);
            }
        }
        wall.push_back(index);

    } while (next_permutation(permu.begin(), permu.end()));
}

void dfs(int y, int x) {
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= H || nx < 0 || nx >= W) {
            continue;
        }
        if (visited[ny][nx] == 1 || arr[ny][nx] == 1) {
            continue;
        }
        dfs(ny, nx);
    }

    return;
}

void addResult() {
    int cnt=0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (arr[i][j] == 0 && visited[i][j] == 0) {
                cnt++;
            }
        }
    }
    result.push_back(cnt);
}
