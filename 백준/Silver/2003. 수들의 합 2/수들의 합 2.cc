// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, M, result = 0;
    int start = 0, end = 0, sum = 0;

    cin >> N >> M;

    vector<int> v(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    while (end <= N) {
        if (sum < M) {
            sum += v[end++];
        } else if (sum > M) {
            sum -= v[start++];
        } else {
            result++;
            sum += v[end++];
        }
    }

    cout << result << '\n';

    return 0;
}