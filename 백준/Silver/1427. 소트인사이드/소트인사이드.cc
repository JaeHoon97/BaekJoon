#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    vector<int> v;

    cin >> n;

    while (true) {
        v.push_back(n % 10);  // 일의 자리 수를 얻고 배열에 저장.
        n = n / 10;           // 왼쪽으로 1칸씩 자릿수 이동.
        if (n == 0) {
            break;  // 더이상 나눌 수가 없으면 반복문 종료
        }
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}
