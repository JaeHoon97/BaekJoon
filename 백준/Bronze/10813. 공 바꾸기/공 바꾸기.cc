#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int n, m;                 // 바구니의 수 n개, 공을 바꾸는 수 m번
    int first, second, temp;  // first번 바구니, second번 바구니, 임시 저장소 temp
    vector<int> v;

    cin >> n >> m;  // 바구니의 수, 공을 바꾸는 수를 입력받는다.

    for (int i = 0; i < n; i++) {
        v.push_back(i + 1);
    }

    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        temp = v[first - 1];
        v[first - 1] = v[second - 1];
        v[second - 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
