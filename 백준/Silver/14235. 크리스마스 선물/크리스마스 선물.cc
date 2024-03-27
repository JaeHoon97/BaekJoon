#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    priority_queue<long long> pq;
    long long N, num, fill;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;                        // 산타가 거점지를 방문할지 아니면 아이들에게 방문할지
        if (num == 0) {                    // 0일 경우 산타는 아이들에게 자신이 가진 가장 큰 선물을 준다.
            if (!pq.empty()) {             // 산타에게 선물이 있을 경우
                cout << pq.top() << '\n';  // 가장 큰 선물을 주고
                pq.pop();                  // 선물을 줬으니 목록에서 제거한다.
            } else {                       // 산타에게 선물이 없을 경우
                cout << -1 << '\n';
            }
        } else {  // 아이들이 아닌 거점을 방문했으니 선물을 충전한다.
            for (int i = 0; i < num; i++) { // num만큼 선물을 충전한다.
                cin >> fill;
                pq.push(fill);
            }
        }
    }

    return 0;
}