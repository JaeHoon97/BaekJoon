#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, C, K, result = 0;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> C >> K;
        result += C * K;
    }

    cout << result  << '\n';

    return 0;
}