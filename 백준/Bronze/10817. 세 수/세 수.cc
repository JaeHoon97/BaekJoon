#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3);  // 세 정수 a b c를 저장할 벡터

    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[1] << '\n';

    return 0;
}