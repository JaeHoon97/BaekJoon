#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int> S;  // 집합

void add(const int& x) {
    S.insert(x);  // 원소 삽입.
}
void remove(const int& x) {
    S.erase(x);  // 원소 제거.
}
void check(const int& x) {
    // 원소가 없으면 0, 있으면 1 출력.
    S.find(x) == S.end() ? cout << 0 << '\n' : cout << 1 << '\n';
}
void toggle(const int& x) {
    if (S.find(x) == S.end()) {  // 원소가 없으면 추가, 있으면 제거.
        S.insert(x);
    } else {
        S.erase(x);
    }
}
void all(void) {
    for(int i=1;i<=20;i++){
        S.insert(i);
    }
}
void empty(void) {
    S.clear();  // 모든 원소 삭제
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    
    int count, x;    // 연산의 수
    string require;  // 수행 명령어

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> require;
        if (require == "add") {
            cin >> x;
            add(x);
        }
        if (require == "remove") {
            cin >> x;
            remove(x);
        }
        if (require == "check") {
            cin >> x;
            check(x);
        }
        if (require == "toggle") {
            cin >> x;
            toggle(x);
        }
        if (require == "all") {
            all();
        }
        if (require == "empty") {
            empty();
        }
    }

    return 0;
}
