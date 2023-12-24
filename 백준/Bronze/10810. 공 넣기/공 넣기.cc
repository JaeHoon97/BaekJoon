#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int n, m;           // 바구니의 수 n개, 바구니에 공을 넣는 수 m번
    int start, end, k;  // start번 바구니부터 end번 바구니까지, 공 번호 k

    cin >> n >> m;  // 바구니의 수와 공을 넣는 수를 입력받는다.

    vector<int> v(n, 0);  // 벡터를 생성하고 크기는 n, 0으로 초기화

    for (int i = 0; i < m; i++) {
        cin >> start >> end >> k;  // start ~ end 바구니와 공 번호 k를 입력받는다.
        for (int j = start; j <= end; j++) {
            v[j - 1] = k;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
