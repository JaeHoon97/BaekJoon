#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    set<string> nicknames;
    string str;
    int n, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "ENTER") { // enter를 입력할 경우
            nicknames.clear(); // set 초기화
        } else {
            if(nicknames.find(str) == nicknames.end()){ // set에서 닉네임을 찾지 못 했을경우, 즉 처음 입력일 경우
                nicknames.insert(str); // 닉네임 추가
                count++; // count 증가
            }
        }
    }

    cout << count << '\n';

    return 0;
}
/*
    사람들이 들어오고(enter) set에 닉네임을 추가한다.
    다음 enter가 들어오면 이전까지의 set의 size를 count에 추가한다.
    set을 초기화하고 다시 닉네임을 추가하는 작업을 반복한다.
    count값을 결과로 출력한다.
*/