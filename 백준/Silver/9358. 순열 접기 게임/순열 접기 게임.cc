#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

bool getDeque(deque<int> dq);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int T, N;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> N;
        deque<int> d;
        for (int j = 0; j < N; j++) {
            int num;
            cin >> num;
            d.push_back(num);
        }
        if (getDeque(d)) {
            cout << "Case #" << i << ": Alice" << '\n';
        } else {
            cout << "Case #" << i << ": Bob" << '\n';
        }
    }

    return 0;
}

bool getDeque(deque<int> dq) {
    while (dq.size() != 2) {
        deque<int> copy;
        int size = dq.size() / 2;
        if (dq.size() % 2 == 0) {  // 원소의 수가 짝수일 경우
            for (int i = 0; i < size; i++) {
                copy.push_back(dq.front() + dq.back());
                dq.pop_front(), dq.pop_back();
            }
        } else {  // 원소의 수가 홀수일 경우
            for (int i = 0; i <= size; i++) {
                if (i == size) {
                    copy.push_back(dq.front() * 2);
                } else {
                    copy.push_back(dq.front() + dq.back());
                    dq.pop_front(), dq.pop_back();
                }
            }
        }
        dq = copy;
    }
    return dq.front() > dq.back();
}