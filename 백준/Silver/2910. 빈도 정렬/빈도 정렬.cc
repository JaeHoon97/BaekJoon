/*
    - 문제
        메시지의 길이 N개, 숫자 C.
        입력받는 숫자는 C보다 작다.
        자주 등장하는 빈도 수를 측정하고 빈도 수가 가장 많은 순서대로 먼저 출력한다.
        만약 빈도 수가 같을경우는, 먼저 나온 것이 먼저 출력되게한다.
        1. map을 이용하여 숫자와 빈도수를 쌍으로 저장한다.
        2. map의 데이터를 vector에 저장하고, map의 value값으로 vector를 정렬한다.
        3. value값이 큰 값을 시작으로 내림차순을 기준으로 잡는다.
    - 자료구조
        map, vector,
    - 복잡도
        N * 

*/
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, C, cnt = 1;
map<int, int> m, order;

bool compare(pair<int, int> left, pair<int, int> right) {
    if(left.second != right.second) {
        return left.second > right.second;
    } else {
        return order[left.first] < order[right.first]; 
    }
    
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> C;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        m[num]++;
        if (order[num] == 0) {
            order[num] = cnt++;
        }
    }
    vector<pair<int, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(), compare);

    for (const auto& n : v) {
        for (int i = 0; i < n.second; i++) {
            cout << n.first << ' ';
        }
    }

    cout << '\n';

    return 0;
}
