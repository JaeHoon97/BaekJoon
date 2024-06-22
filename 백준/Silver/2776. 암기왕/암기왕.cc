#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int T, N, M, num;
map<int, int> note;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;  // 최대 백만까지

        for (int j = 0; j < N; j++) {
            cin >> num;  // 21억까지
            note[num] = 1;
        }

        cin >> M;  // 최대 백만까지

        for (int j = 0; j < M; j++) {
            cin >> num;  // 21억까지
            if (note[num] == 1) {
                cout << '1' << '\n';
            } else {
                cout << '0' << '\n';
            }
        }

        note.clear();
    }

    return 0;
}
