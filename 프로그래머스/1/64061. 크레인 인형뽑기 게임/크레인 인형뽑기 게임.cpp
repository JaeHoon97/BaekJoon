#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int size = board.size();
    // 열마다 인형들을 저장할 스택을 만듭니다.
    vector<stack<int>> s(size);

    // 각 열에 대해, **아래쪽 행부터 위쪽 행**으로 인형을 스택에 넣습니다.
    for (int col = 0; col < size; col++) {
        for (int row = size - 1; row >= 0; row--) {
            if (board[row][col] != 0) {
                s[col].push(board[row][col]);
            }
        }
    }

    stack<int> basket;
    for (int move : moves) {
        int col = move - 1;  // moves는 1-indexed
        if (!s[col].empty()) {
            int doll = s[col].top();
            s[col].pop();
            if (!basket.empty() && basket.top() == doll) {
                basket.pop();
                answer += 2;
            } else {
                basket.push(doll);
            }
        }
    }
    
    return answer;
}
