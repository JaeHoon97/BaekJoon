#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int person, min, result = 0; // 인원, 분, 최소시간

    cin >> person;

    int wait[person]; // 각 순서의 사람이 기다려야되는 시간

    for (int i = 0; i < person; i++) {
        cin >> min;
        wait[i] = min;
    }

    sort(wait, wait + person);

    for (int i = 0; i < person; i++) {
        for (int j = 0; j <= i; j++) {
            result += wait[j];
        }
    }

    cout << result << endl;

    return 0;
}