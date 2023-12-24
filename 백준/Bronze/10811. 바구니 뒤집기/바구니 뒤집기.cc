#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);

    int n, m;        // 바구니는 총 n개, m번 바구니를 역순으로 바꾼다.
    int start, end;  // 시작 start, 마지막 end.

    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        v.push_back(i + 1);
    }

    for (int i = 0; i < m; i++) {
        cin >> start >> end;
        reverse(&v[start - 1], &v[end]);
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
