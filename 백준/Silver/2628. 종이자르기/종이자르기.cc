#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> width, height;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int wl, hl, cnt, choice, num, x = -1, y = -1;

    cin >> wl >> hl >> cnt;

    width.push_back(0), height.push_back(0);
    width.push_back(wl), height.push_back(hl);

    for (int i = 0; i < cnt; i++) {
        cin >> choice >> num;
        if (choice == 0) {          // 가로로 자를 때
            height.push_back(num);  // 세로 선을 구분
        } else {                    // 세로로 자를 때
            width.push_back(num);   // 가로 선을 구분
        }
    }

    sort(width.begin(), width.end());
    sort(height.begin(), height.end());

    for (int i = 0; i < width.size()-1; i++) {
        x = max(x, (width[i + 1] - width[i]));
    }

    for (int i = 0; i < height.size()-1; i++) {
        y = max(y, (height[i + 1] - height[i]));
    }

    cout << x * y << '\n';

    return 0;
}
