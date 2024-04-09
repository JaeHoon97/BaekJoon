#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int testCase, W, H, K;  // 테스트 케이스, 가로 길이, 세로 길이, 배추 수

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> W >> H >> K;

        int arr[50][50] = {0};
        int visited[50][50] = {0};

        for (int j = 0; j < K; j++) {
            int X, Y;  // 해당 좌표에는 배추가 심어져 있음
            cin >> X >> Y;
            arr[Y][X] = 1;  // YX 2차원배열로 세팅
        }

        queue<pair<int, int>> q;  // BFS를 위한 Queue
        int areaCount = 0;        // 영역의 수

        for (int m = 0; m < H; m++) {
            for (int n = 0; n < W; n++) {
                if (visited[m][n] == 0 && arr[m][n] == 1) {  // 방문하지 않았다면
                    visited[m][n] = 1;  // 먼저 방문처리를 한다.
                    q.push({m, n});     // 방문처리한 좌표(Y, X)를 큐에 삽입한다.

                    while (!q.empty()) {  //  큐가 비어있지않으면 반복한다.
                        pair<int, int> p = q.front();
                        q.pop();
                        for (int l = 0; l < 4; l++) {
                            int ny = p.first + dy[l];                      // Y
                            int nx = p.second + dx[l];                     // X
                            if (ny < 0 || ny >= H || nx < 0 || nx >= W) {  // 좌표가 범위를 벗어날 경우.
                                continue;
                            }
                            if (arr[ny][nx] == 0 || visited[ny][nx] == 1) {  // 이미 방문처리된 좌표일 경우.
                                continue;
                            }
                            visited[ny][nx] = 1;  // 방문처리를 먼저 한다.
                            q.push({ny, nx});
                        }
                    }
                    areaCount++;
                }
            }
        }
        cout << areaCount << '\n';
    }

    return 0;
}
/*
    - 문제
        배추흰지렁이를 배추주변에 풀어서 해충을 방지한다.
        배추가 모여있는 영역에 1마리만 풀어놓으면 해당영역을 모두 보호한다.
        모두 몇마리가 필요한지 구하라 -> 나누어진 영역이 몇개인지 구하라.
    - 자료구조
        BFS, QUEUE, VECTOR
    - 복잡도

*/