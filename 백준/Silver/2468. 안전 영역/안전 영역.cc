/*
    - 문제
        해당 영역마다 높이가 주어지는데, 비의 양이 영역의 높이보다 높거나 같은경우
        해당 영역은 잠긴다. 잠기지 않는 안전한 영역의 수를 구하라.
        1. 각 영역의 높이를 입력받는다.
        2. 입력받은 영역의 높이 - N를 계산한다.
        3. 높이 > 0 일 경우에는 안전한 영역이다
        4. BFS를 이용하고, 높이 > 0 && visited == 0일 경우 방문한다.
        5. 영역을 count 한다.
    - 자료구조
        BFS, QUEUE, VECTOR
    - 복잡도

*/
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int arr[100][100];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v;
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int l = 0; l <= 100; l++) {
        int arr2[100][100];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr2[i][j] = arr[i][j];
            }
        }
        int visited[100][100] = {0};
        queue<pair<int, int>> q;
        int areaCount = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if ((arr2[i][j] - l) > 0 && visited[i][j] == 0) {
                    visited[i][j] = 1;
                    q.push({i, j});

                    while (!q.empty()) {
                        pair<int, int> currentXY = q.front();
                        q.pop();

                        for (int k = 0; k < 4; k++) {
                            int ny = currentXY.first + dy[k];
                            int nx = currentXY.second + dx[k];
                            if (ny < 0 || nx < 0 || ny >= N || nx >= N) {
                                continue;
                            }
                            if ((arr2[ny][nx] - l) <= 0 || visited[ny][nx] == 1) {
                                continue;
                            }
                            visited[ny][nx] = 1;
                            q.push({ny, nx});
                        }
                    }
                    areaCount++;
                }
            }
        }
        v.push_back(areaCount);
    }

    cout << *max_element(v.begin(), v.end()) << '\n';

    return 0;
}
