#include <iostream>
#include <string>
using namespace std;

void getFinishTime(int h, int m, int t) {
    int hour = h, min = m, time = t;  // 시각 분 소요시간
    min += time;                      // 현재 분에 소요시간을 더함
    if (min >= 60) {                  // 만약 60분 이상일 경우
        hour = (hour + (min / 60)) % 24;
        min = min % 60;
    }

    cout << hour << " " << min << endl;
}

int main(void) {
    int h, m, t;

    cin >> h >> m;

    cin >> t;

    getFinishTime(h, m, t);

    return 0;
}
