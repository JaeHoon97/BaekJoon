#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, result = 0, normalHumanSector = 0, abnormalHumanSector = 0;
bool flag = false;
char arr[105][105];
char arr2[105][105];
int visited[105][105];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};

void clear() {
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            visited[i][j] = 0;
        }
    }
}

void dfs(const int &y, const int &x, const char &color) {
    visited[y][x] = 1;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= N || nx < 0 || nx >= N) {
            continue;
        }
        if (!flag) {
            if (arr[ny][nx] == color && !visited[ny][nx]) {
                dfs(ny, nx, color);
            }
        } else {
            if (arr2[ny][nx] == color && !visited[ny][nx]) {
                dfs(ny, nx, color);
            }
        }
    }
}

int go(const vector<char> &colors) {
    int sectorCount = 0;

    for (char color : colors) {
        result = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (!flag) {
                    if (arr[i][j] == color && !visited[i][j]) {
                        result++;
                        dfs(i, j, color);
                    }
                } else {
                    if (arr2[i][j] == color && !visited[i][j]) {
                        result++;
                        dfs(i, j, color);
                    }
                }
            }
        }
        sectorCount += result;
    }

    return sectorCount;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < N; j++) {
            input[j] == 'G' ? arr2[i][j] = 'R' : arr2[i][j] = input[j];
            arr[i][j] = input[j];
        }
    }

    normalHumanSector = go({'R', 'G', 'B'});
    clear();
    flag = true;
    abnormalHumanSector = go({'R', 'B'});

    cout << normalHumanSector << ' ' << abnormalHumanSector << endl;

    return 0;
}