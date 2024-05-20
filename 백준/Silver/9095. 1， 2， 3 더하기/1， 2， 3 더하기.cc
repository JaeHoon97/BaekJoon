#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int T, N;

int solution(const int& n);
int permutation(int a, int b, int c);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;

        cout << solution(N) << '\n';
    }

    return 0;
}

int solution(const int& n) {
    int result = 0;

    for (int x = 0; x <= 3; x++) {
        for (int y = 0; y <= 5; y++) {
            for (int z = 0; z <= 10; z++) {
                if (3 * x + 2 * y + z == n) {
                    result += permutation(x, y, z);
                }
            }
        }
    }
    return result;
}

int permutation(int a, int b, int c) {
    vector<int> v;
    int result = 0;

    for (int i = 0; i < a; i++) {
        v.push_back(1);
    }
    for (int i = 0; i < b; i++) {
        v.push_back(2);
    }
    for (int i = 0; i < c; i++) {
        v.push_back(3);
    }

    do {
        for (auto it = v.begin(); it != v.end(); it++) {
        }
        result++;
    } while (next_permutation(v.begin(), v.end()));
    
    return result;
}
