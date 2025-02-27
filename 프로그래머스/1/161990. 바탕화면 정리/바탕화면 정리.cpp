#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {100, 100, -1, -1};
    vector<int> xArr, yArr;

    int weight = wallpaper[0].size();  // 가로 크기
    int height = wallpaper.size();     // 세로 크기

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < weight; j++) {
            if (wallpaper[i][j] == '#') {
                answer[0] = min(i, answer[0]);      // y의 최소
                answer[1] = min(j, answer[1]);      // x의 최소
                answer[2] = max(i + 1, answer[2]);  // y의 최대
                answer[3] = max(j + 1, answer[3]);  // x의 최대
            }
        }
    }

    return answer;
}