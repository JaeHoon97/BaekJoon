#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string color = board[h][w];

    for (int i = 0; i < 4; i++) {
        int ny = h + dy[i];
        int nx = w + dx[i];
        if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board.size()) {
            continue;
        }
        if (board[ny][nx] == color) {
            answer++;
        }
    }

    return answer;
}