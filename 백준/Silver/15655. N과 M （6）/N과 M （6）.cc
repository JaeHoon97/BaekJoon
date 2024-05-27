#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
vector<int> v, check;
int N, M, i;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 1; i <= N; i++) {
        if (i <= M) {
            check.push_back(1);
        } else {
            check.push_back(0);
        }
    }

    sort(v.begin(), v.end());

    do {
        for (int i = 0; i < check.size(); i++) {
            if(check[i]) {
                cout << v[i] << ' ';
            }
        }
        cout << '\n';

    } while (prev_permutation(check.begin(), check.end()));

    return 0;
}
