#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int STACK[10000];
int TOP = -1;

void stack_push(const int& num) { 
    STACK[++TOP] = num; 
}
int stack_pop() {
    if (TOP == -1) {  // 스택에 원소가 없을 때
        return -1;
    } else {
        return STACK[TOP--];
    }
}
int stack_size() { 
    return TOP + 1; 
}
int stackIsEmpty() {
    if (TOP == -1) {
        return 1;
    } else {
        return 0;
    }
}
int stack_top() {
    if (TOP == -1) {
        return -1;
    } else {
        return STACK[TOP];
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string str;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            int num;
            cin >> num;       // top비교해야함
            stack_push(num);  // 입력받은 정수를 스택에 삽입
        } else if (str == "pop") {
            cout << stack_pop() << '\n';
        } else if (str == "size") {
            cout << stack_size() << '\n';
        } else if (str == "empty") {
            cout << stackIsEmpty() << '\n';
        } else if (str == "top") {
            cout << stack_top() << '\n';
        }
    }

    return 0;
}