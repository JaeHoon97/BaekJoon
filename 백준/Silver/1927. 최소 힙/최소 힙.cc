#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long N, num;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;

        if (num == 0) { // x가 자연수가 아닐 경우
            if (!pq.empty()) { // 최대힙이 비어있지 않을 경우
                cout << pq.top() << '\n'; // 가장 작은 값 출력
                pq.pop(); // 가장 작은 값 제거
            } else { // 최소 힙이 비어있을 경우
                cout << 0 << '\n';
            }
        } else {  // x가 자연수일 경우
            pq.push(num); // 자연수 추가
        }
    }

    return 0;
}
