#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include<cmath>

using namespace std;

struct compare {
    bool operator()(const int& left, const int& right) {
        if (abs(left) != abs(right)) {
            return abs(left) > abs(right);
        } else {
            return left > right;
        }
    }
};


int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    priority_queue<int, vector<int>, compare> pq;

    int N = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        
        cin >> x;

        if (x != 0) {
            pq.push(x);
        } else {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << 0 << '\n';
            }
        }
    }

    return 0;
}