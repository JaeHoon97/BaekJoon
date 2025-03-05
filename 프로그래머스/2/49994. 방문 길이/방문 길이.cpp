#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int visited[11][11][11][11];   // 좌표가 0부터 10까지 있기 때문. dy dx ny nx
int dx = 5, dy = 5;  // 현재 좌표이며, 시작 좌표로 (5,5)
int ny, nx;


int solution(string dirs) {
    int answer = 0;

    for (int i = 0; i < dirs.size(); i++) {
        if (dirs[i] == 'U') {
            ny = dy - 1;
            nx = dx;
        } else if (dirs[i] == 'R') {
            ny = dy;
            nx = dx + 1;
        } else if (dirs[i] == 'D') {
            ny = dy + 1;
            nx = dx;
        } else {  // 'L'
            ny = dy;
            nx = dx - 1;
        }

        // 좌표를 벗어난 경우
        if (ny < 0 || ny > 10 || nx < 0 || nx > 10) {
            continue;
        }

        // 걸어본 거리가 아닐 경우
        if (visited[dy][dx][ny][nx] == 0 && visited[ny][nx][dy][dx] == 0) {
            visited[dy][dx][ny][nx] = 1;
            visited[ny][nx][dy][dx] = 1;
            answer++;
        }
        dy = ny;
        dx = nx;
    }

    return answer;
}