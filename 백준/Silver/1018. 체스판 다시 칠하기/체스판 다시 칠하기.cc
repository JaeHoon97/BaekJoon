#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, M, result = 3000;

string str[50];
string white[8] = {"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};
string black[8] = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};

int getColorCount(const int &height, const int &width) {
    int whiteCnt = 0, blackCnt = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (str[i + height][j + width] != white[i][j]) {
                whiteCnt++;
            }
            if (str[i + height][j + width] != black[i][j]) {
                blackCnt++;
            }
        }
    }

    return min(whiteCnt, blackCnt);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i + 7 < N && j + 7 < M) {
                int cnt = getColorCount(i, j);
                result = min(cnt, result);
            }
        }
    }

    cout << result << '\n';

    return 0;
}