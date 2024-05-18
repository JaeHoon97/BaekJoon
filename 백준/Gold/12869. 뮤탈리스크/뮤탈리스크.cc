#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, result;
int scv[3];
vector<vector<int>> v = {{9, 3, 1}, {9, 1, 3}, {3, 9, 1}, {3, 1, 9}, {1, 9, 3}, {1, 3, 9}};
int visited[61][61][61];  
queue<tuple<int, int ,int>> q;

int bfs(int a, int b ,int c);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N; // scv의 수를 입력받는다.

    for (int i = 0; i < N; i++) {
        cin >> scv[i]; // 각 scv의 체력을 입력받는다.
    }

    result = bfs(scv[0], scv[1], scv[2]); // 체력으로 bfs를 돌린다.

    cout << result << '\n';

    return 0;
}

int bfs(int a, int b ,int c) {
    visited[a][b][c] = 1; // 체력 a, b, c를 방문처리 한다.
   
    q.push({a, b, c}); // 첫번째 원소를

    while (!q.empty()) {
        int first = get<0>(q.front());
        int second = get<1>(q.front());
        int third = get<2>(q.front());
        
        q.pop();

        if(first== 0 && second == 0 && third == 0) {
            break;
        }
        
        for(auto arr : v) {
            int nFirst = max(0, first - arr[0]);
            int nSecond = max(0, second - arr[1]);
            int nThird = max(0, third - arr[2]);
            if(visited[nFirst][nSecond][nThird]) { 
                continue; 
            }
            visited[nFirst][nSecond][nThird] = visited[first][second][third] + 1;
            q.push({nFirst, nSecond, nThird});
        }
    }

    return visited[0][0][0] -1;

}
