#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    vector<vector<int>> area(board.size(), vector<int>(board.size(), 0));
    int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j]) {  // 지뢰가 매설된 지역이라면
                for (int k = 0; k < 8; k++) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if (ny < 0 || ny >= board.size() || nx < 0 || nx >= board.size()) {
                        continue;
                    }
                    if (area[ny][nx]) {
                        continue;
                    }
                    area[ny][nx] = 1;
                }
                area[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (area[i][j] == 0) {
                answer++;
            }
        }
    }

    return answer;
}