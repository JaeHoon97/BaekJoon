#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int arr[1000001];
int result[1000001];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, num;
    stack<int> s;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        while (!s.empty() && (arr[s.top()] < arr[i])) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty()) {
        result[s.top()] = -1;
        s.pop();
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << ' ';
    }
    cout << '\n';

    return 0;
}
