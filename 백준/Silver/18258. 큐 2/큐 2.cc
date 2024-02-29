#include <algorithm>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> q; // 큐
string command;    // 사용자 명령어
int value, count;  // 입력받는 정수 값, 명령어 수

void push() {
    cin >> value;
    q.push(value);
}
void pop(void) {
    if(q.size() == 0){
        cout << -1 << '\n';
    } else {
        cout << q.front() << '\n';
        q.pop();
    } 
}
void size(void) { cout << q.size() << '\n'; }
void empty(void) { q.size() == 0 ? cout << 1 << '\n' : cout << 0 << '\n'; }
void front(void) { q.size() == 0 ? cout << -1 << '\n' : cout << q.front() << '\n'; }
void back(void) { q.size() == 0 ? cout << -1 << '\n' : cout << q.back() << '\n'; }

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> ::count;

    for (int i = 0; i < ::count; i++) {
        cin >> command;
        if (command == "push") {
            push();
        } else if (command == "pop") {
            pop();
        } else if (command == "size") {
            size();
        } else if (command == "empty") {
            empty();
        } else if (command == "front") {
            front();
        } else if (command == "back") {
            back();
        }
    }

    return 0;
}