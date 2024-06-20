#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, K;

vector<int> result;
queue<int> q;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> K;

    for (int i = 2; i <= N; i++) {
        q.push(i);  // 큐에 오른차순으로 원소를 삽입한다.
    }

    while (!q.empty()) {
        int front = q.front();    // 큐에서 가장 작은 수를 저장한다.
        result.push_back(front);  // 꺼낸 원소를 벡터에 저장한다.
        q.pop();                  // 가장 작은 수를 큐에서 제거한다.

        int size = q.size();      // 큐의 크기
        
        for (int i = 0; i < size; i++) {
            int f = q.front();
            if(f % front == 0) { // 나누어 떨어지면
                q.pop(); // 원소를 제거한다.
                result.push_back(f); // 벡터에 저장한다.
            } else { // 나누어 떨어지지 않으면
                q.push(f); // 원소를 뒤에 삽입한다.
                q.pop(); // 원소를 제거한다.
            }
        }
    }

    cout << result.at(K-1) << '\n';

    return 0;
}