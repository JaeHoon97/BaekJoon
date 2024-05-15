#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int N, y;
int arr[101][101], result[101][101], visited[101];

void dfs(const int& x);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
		y = i;
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == 1) {
                dfs(j);
            }
		}
		memset(visited, 0, sizeof(visited));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << result[i][j] << ' ';
        }
		cout << '\n';
    }

    return 0;
}

void dfs(const int& x) {
    if (visited[x] == 1) {
        return;
    }
	result[y][x] = 1;
    visited[x] = 1;

    for (int nx = 0; nx < N; nx++) {
        if (arr[x][nx] == 1) {
            dfs(nx);
        }
    }

}