#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long n, main_mark, sub_mark;                   // 시험장 수, 총감독관 담당인원, 부감독관 담당인원
    long long main_supervisor = 0, sub_supervisor = 0;  // 총감독관 수, 부감독관 수

    cin >> n;

    long long place[n];  // 시험장 번호를 부여하기 위한 벡터

    for (int i = 0; i < n; i++) {
        cin >> place[i];  // 각 시험장마다 시험을 치는 학생 수를 입력받고 저장
    }

    cin >> main_mark >> sub_mark;

    main_supervisor += n;  // n개의 시험장에 1명씩 무조건 필요하니까 n명을 추가

    for (int i = 0; i < n; i++) {
        place[i] -= main_mark;  // 총감독관을 배치했으니 그만큼 마크해야하는 인원 감소
        if (place[i] > 0) {
            if (place[i] % sub_mark == 0) {
                sub_supervisor += place[i] / sub_mark;
            } else {
                sub_supervisor += ((place[i] / sub_mark) + 1);
            }
        }
    }

    cout << main_supervisor + sub_supervisor << '\n';

    return 0;
}