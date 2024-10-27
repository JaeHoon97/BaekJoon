#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, cnt = 1;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void dfs(int num, int cnt) {
    if (cnt > N) {
        return;
    }

    if (isPrime(num)) {
        if (cnt == N) {
            cout << num << "\n";
            return;
        }
        for (int i = 1; i <= 9; i += 2) {
            dfs(num * 10 + i, cnt + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 2; i <= 7; i++) {
        if (i == 2 || i == 3 || i == 5 || i == 7) {
            dfs(i, cnt);
        }
    }

    return 0;
}