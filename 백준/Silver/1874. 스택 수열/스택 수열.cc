#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    stack<int> s;
    queue<int> q;
    vector<string> result;
    int n, count = 0, value = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        q.push(num);
    }

    while (!q.empty()) {
        if (!s.empty() && s.top() == q.front()) {  // 스택이 비어있지 않고, 스택의 탑과 큐의 프론트가 같을 경우
            s.pop();
            q.pop();
            result.push_back("-");
        } else {  // 스택이 비어 있거나, 스택의 탑과 큐의 프론트가 같지 않을 경우
            s.push(value);
            value++;
            result.push_back("+");
        }
        count++;
        if (count > n * 2) {
            result.clear();
            result.push_back("NO");
            break;
        }
    }

    for (const auto& str : result) {
        cout << str << '\n';
    }

    return 0;
}