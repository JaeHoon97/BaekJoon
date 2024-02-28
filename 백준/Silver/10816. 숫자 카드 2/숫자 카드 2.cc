#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m, key;
    map<int, int> card;  // key값으로는 카드의 수가 value값으로는 해당 카드의 개수가 저장되는 map. 오름차순 자동정렬.

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> key;  // key값을 입력받는다.

        card[key]++;  // key값의 value를 1증가 시킨다.
                      // 존재하지 않는 key일경우 key를 생성하고 value를 0으로 초기화한 후 1을 증가시킨다.
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> key;
        if (card.find(key) != card.end()) { // 만약 카드에 해당 키가 존재하면
            cout << card[key] << ' ';
        } else {
            cout << 0 << ' ';
        }
    }

    return 0;
}

//