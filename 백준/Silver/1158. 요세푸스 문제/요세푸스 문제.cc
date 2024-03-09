#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    queue<int> q, result;
    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (!q.empty()) {                   // 큐가 비어있지 않을 때까지 반복.
        for (int i = 1; i <= k - 1; i++) {  // n-1번 까지 원소를 뒤로 보내는 작업.
            q.push(q.front());             // 큐의 프론트를 뒤로 넣고.
            q.pop();                       // 프론트를 제거.
        }
        result.push(q.front());  // n번이 되면 해당 원소를 결과에 삽입.
        q.pop();                 // 프론트 제거.
    }

    cout << "<";

    for (int i = 1; i <= n; i++) {
        if(i!=n){
            cout << result.front() << ", ";
            result.pop();
        } else {
            cout << result.front();
        }
    }

    cout << ">" << '\n';

    return 0;
}