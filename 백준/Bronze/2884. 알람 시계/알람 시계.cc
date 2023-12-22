#include <iostream>
#include <string>
using namespace std;

void getAlarmTime(int h, int m) {
    int hour = h, min = m;  // 시간, 분

    min -= 45;  // 분에 45분을 뺌
    if (min < 0) {  // 분이 음수일 경우
        hour -= 1;       // 1시간을 뒤로
        if (hour < 0) {  // 1시간을 뒤로갔는데 만약 음수일 경우에는 23시부터 시작
            hour = 23;
        }
        min = 60 + min;
    }
    // 분이 45보다 같거나 클경우에는 시간이 변동되지 않아서 else문을 작성하지 않아도 된다.
    cout << hour << " " << min << endl;
}

int main(void) {
    int h = 0, m = 0;

    cin >> h >> m;

    getAlarmTime(h, m);

    return 0;
}
