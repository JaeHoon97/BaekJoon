/*
    - 문제
        사이즈가 M*N의 모눈종이가 있다. K개의 직사각형을 그릴 때 직사각형의 내부를 제외한 나머지 영역을 구하라.
        영역의 개수를 구하고, 각 영역의 사이즈를 출력하라.
        1. M, N, K를 입력받는다. M은 세로, N은 가로
        2. 좌표를 입력받는다.
        3. (x1, y1)(x2, y2)일 때, 반복문으로 visited[y1이상 y2미만][x1이상 x2미만] = 1로 세팅한다.
        4. 재귀함수를 사용하여 DFS를 구현한다.
        5. 총 영역 totalArea를 출력하고, 다음 줄에 areaSize를 담은 vector의 원소를 오름차순으로 출력한다.
    - 자료구조
        DFS, RECURSION, VECTOR
    - 복잡도

*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int H, W, K, areaSize, totalArea;
int arr[100][100];
int visited[100][100];
vector<int> v;

void dfs(const int currentY, const int currentX);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> H >> W >> K;  // 세로, 가로, 직사각형 수

    for (int i = 0; i < K; i++) {  // 모눈종이를 그리는 반복문
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;  // 두 점의 좌표

        for (int y = y1; y < y2; y++) {
            for (int x = x1; x < x2; x++) {
                arr[y][x] = 1;  // 1일경우 접근금지
            }
        }
    }

    for (int i = 0; i < H; i++) {  // 본격적으로 반복문으로 DFS탐색
        for (int j = 0; j < W; j++) {
            if (visited[i][j] == 0 && arr[i][j] == 0) {  // 방문하지 않았고, 접근금지 구역이 아닐경우(0이면 접근가능)
                areaSize = 0;                            // 직사각형의 사이즈 초기화
                visited[i][j] = 1;                       // 우선 방문처리를 해주고
                dfs(i, j);                               // DFS탐색 시작
                v.push_back(areaSize);
                totalArea++;
            }
        }
    }

    sort(v.begin(), v.end());

    cout << totalArea << '\n';

    for (const int& num : v) {
        cout << num+1 << ' ';
    }
    cout << '\n';

    return 0;
}

void dfs(const int currentY, const int currentX) {

    for (int i = 0; i < 4; i++) {
        int ny = currentY + dy[i];
        int nx = currentX + dx[i];

        if (ny < 0 || ny >= H || nx < 0 || nx >= W) {
            continue;
        }
        if (arr[ny][nx] == 1 || visited[ny][nx] == 1) {
            continue;
        }
        visited[ny][nx] = 1;
        areaSize++;  // 방문했기 때문에 직사각형 1사이즈 추가
        dfs(ny, nx);
    }
}
