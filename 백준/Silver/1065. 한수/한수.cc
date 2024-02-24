#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int num, count = 0;
    int hundreds, tens, units;

    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (1 <= i && i <= 99) {  // 1 ~ 99까지는 모두 등차수열
            count++;
        } else if(100 <= i && i <= 999){  // 100 ~ 1000까지는 일부만 등차수열이고(그러나 1000은 등차수열 제외), 즉 100 ~ 999에서 카운트
            hundreds = i / 100;
            tens = (i % 100) / 10;
            units = (i % 100) % 10;
            if (hundreds - tens == tens - units) {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}