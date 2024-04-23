#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, homeCount;
int arr[25][25], visited[25][25];
int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
vector<int> home;

void getArray(const int& N);
void dfs(const int& H, const int W);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    getArray(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                dfs(i, j);
                home.push_back(homeCount);
                homeCount = 0;
            }
        }
    }

    cout << home.size() << '\n';

    sort(home.begin(), home.end());

    for(const auto& num: home) {
        cout << num << '\n';
    }

    return 0;
}

void getArray(const int& N) {
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            arr[i][j] = str[j] - '0';
            if (arr[i][j] == 0) {
                visited[i][j] = 1;
            }
        }
    }
}

void dfs(const int& H, const int W) {
    visited[H][W] = 1;
    homeCount++;

    for (int i = 0; i < 4; i++) {
        int ny = H + dy[i];
        int nx = W + dx[i];

        if (ny < 0 || ny >= N || nx < 0 || nx >= N) {
            continue;
        }
        if (visited[ny][nx] == 1 || arr[ny][nx] == 0) {
            continue;
        }

        dfs(ny, nx);
    }
}