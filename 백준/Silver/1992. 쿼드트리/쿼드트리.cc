#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string arr[64][64];
string recur(const int y, const int x, int N);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++) {
            arr[i][j] = row[j];
        }
    }

    cout << recur(0, 0, N) << '\n';

    return 0;
}

string recur(const int y, const int x, int N) {
    if (N == 1) {
        return arr[y][x];
    }
    string result = "";
    int size = N / 2;

    for (int i = y; i < y + N; i++) {
        for (int j = x; j < x + N; j++) {
            if (arr[y][x] != arr[i][j]) {
                result += '(';
                result += recur(y, x, size);
                result += recur(y, x + size, size);
                result += recur(y + size, x, size);
                result += recur(y + size, x + size, size);
                result += ')';
                return result;
            }
        }
    }

    return arr[y][x];
}