#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, count, myCount, totalcount = 0;  // 사람 수 n, 득표 수 count, 나의 투표 수 myCount
    priority_queue<int> pq;                 // 자신을 제외한 사람의 투표 수 큐 pq
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {  // 자신의 투표 수
            cin >> count;
            myCount = count;
        } else {  // 자신을 제외한 사람의 투표 수
            cin >> count;
            pq.push(count);
        }
    }

    if (!pq.empty()) {
        while (myCount <= pq.top()) {
            myCount++;
            pq.push(pq.top() - 1);
            pq.pop();
            totalcount++;
        }
    }

    cout << totalcount << '\n';

    return 0;
}