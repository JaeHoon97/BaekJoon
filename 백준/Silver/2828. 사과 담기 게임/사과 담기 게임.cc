/*
    - 문제
        스크린 N칸, 스크린 아래쪽에 M칸을 차지하는 바구니, ( M < N ).
        바구니는 왼쪽 또는 오른쪽으로 이동, 영역을 벗어날 수 없다.
        사과를 모두 담으려고할 때 바구니의 이동거리 최솟값을 구하라.
        1. location이 p(x, y) 범위에 포함되면 이동할 필요가 없음.
        2. location이 p(x, y) 범위에 포함되지 않을 경우 이동이 필요한데,
        3. 만약 location < p(x,y)일 때, 즉 위치가 왼쪽에 있을 때 x-location만큼 이동한다. 그리고 이동 수(move)를 더한다.
        4. 만약 location > p(x,y)일 때, 즉 위치가 오른쪽에 있을 때 location-y만큼 이동한다. 그리고 이동 수(move)를 더한다.
    - 자료구조
        pair
    - 복잡도
        N

*/
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int N, M, J, location, moving = 0;
pair<int, int> p = {1, 0};  // 바구니의 처음 범위

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;  // 스크린의 영역 수, 바구니의 사이즈.

    p.second = M;

    cin >> J;  // 떨어지는 사과의 수

    for (int i = 0; i < J; i++) {
        cin >> location;                                    // 사과가 떨어지는 위치
        if (p.first <= location && location <= p.second) {  // 만약 범위에 포함될 경우
            continue;
        } else {                        // 만약 범위에 포함 안 될 경우
            if (p.second < location) {  // 위치가 더 오른쪽에 있을 경우
                int size = location - p.second;
                moving += size;
                p.first += size;
                p.second += size;
            }
            if (p.first > location) {  // 위치가 더 왼쪽에 있을 경우
                int size = p.first - location;
                moving += size;
                p.first -= size;
                p.second -= size;
            }
        }
    }

    cout << moving << endl;

    return 0;
}