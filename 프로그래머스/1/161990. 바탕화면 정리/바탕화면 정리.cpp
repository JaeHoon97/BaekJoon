#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> xArr, yArr;

    int weight = wallpaper[0].size();  // 가로 크기
    int height = wallpaper.size();     // 세로 크기

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < weight; j++) {
            if (wallpaper[i][j] == '#') {
                xArr.push_back(j);
                yArr.push_back(i);
            }
        }
    }

    sort(xArr.begin(), xArr.end());
    sort(yArr.begin(), yArr.end());

    answer.push_back(yArr.front());
    answer.push_back(xArr.front());
    answer.push_back(yArr.back() + 1);
    answer.push_back(xArr.back() + 1);

    return answer;
}