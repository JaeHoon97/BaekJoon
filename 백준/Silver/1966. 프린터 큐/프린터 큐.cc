#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int testCase, N, M, num;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> testCase;  // 테스트 케이스 수

    for (int i = 0; i < testCase; i++) {
        cin >> N >> M;  // 문서의 수, 몇번째로 인쇄되는지 궁금한 문서의 인덱스(0번부터 시작)

        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int cnt = 0;

        for (int j = 0; j < N; j++) {
            cin >> num;
            q.push({j, num});  // j번째는 중요도가 num
            pq.push(num);
        }

        while (true) {
            if (q.front().second != pq.top()) {
                q.push({q.front().first, q.front().second});
                q.pop();
            } else {
                cnt++;
                if (M == q.front().first) {
                    cout << cnt << '\n';
                    break;
                }
                q.pop();
                pq.pop();
            }
        }
    }

    return 0;
}