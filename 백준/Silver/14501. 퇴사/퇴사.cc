#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, result = 0;
vector<int> t(16, 0);
vector<int> p(16, 0);

void go(int date, int money) {
    if (date > N) { // 상담 날짜가 N을 넘어가면 종료
        result = max(result, money);
        return;
    }

    // 상담을 진행하는 경우
    if (date + t[date] <= N + 1) { 
        go(date + t[date], money + p[date]);
    }

    // 상담을 하지 않는 경우
    go(date + 1, money);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> p[i];
    }

    go(1, 0);

    cout << result << '\n';

    return 0;
}
