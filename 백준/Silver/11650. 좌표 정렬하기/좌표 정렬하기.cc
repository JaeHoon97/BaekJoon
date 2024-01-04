#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) { // 매개변수로 pair를 받는다.
    if(a.first == b.first){ // first 값이 같다면
        return a.second < b.second; // second 값을 비교하여 더 큰 값을 기준으로 오름차순 정렬. 
    } else { // fisrt 값이 다르다면
        return a.first < b.first; // first 값을 비교하여 더 큰 값을 기준으로 오름차순 정렬.
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    pair<int, int> p;          // 데이터를 쌍으로 만들 수 있는 pair를 생성.
    vector<pair<int, int>> v;  // pair를 담을 수 있는 v를 생성.
    int n;                     // 입력 받을 pair의 수를 저장.

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p.first >> p.second;
        v.push_back(make_pair(p.first, p.second));  // pair를 만들어 주고 벡터에 저장.
    }

    sort(v.begin(), v.end(), compare); // compare 함수를 만들어서 pair를 정렬하기.

    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << '\n';  // pair의 값을 담고 싶으면 first 와 second를 이용.
    }

    return 0;
}