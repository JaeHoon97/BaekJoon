#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int N, M, here, there, result;
int arr[1005][1005], visited[1005][1005], check[1005];
set<int> s;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> here >> there;
        arr[here][there] = 1;
        arr[there][here] = 1;
        check[here] = 1, check[there] = 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (arr[i][j] == 1 && visited[i][j] == 0) {
                visited[i][j] = 1;

                q.push(j);

                while (!q.empty()) {
                    int y = q.front();

                    q.pop();

                    for (int x = 1; x <= N; x++) {
                        if (arr[y][x] == 1 && visited[y][x] == 0) {
                            visited[y][x] = 1;
                            q.push(x);
                        }
                    }
                }
                result++;
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        if (check[i] == 0) {
            result++;
        }
    }

    cout << result << '\n';

    return 0;
}
