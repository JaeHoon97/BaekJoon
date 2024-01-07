#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;  // 테스트 케이스 n개,

    cin >> n;

    for (int i = 0; i < n; i++) {
        int students, avg, sum = 0, count = 0;  // 학생 수 students, 평균 avg, 총점수 sum, 평균을 넘는 수 count
        
        cin >> students;
        
        vector<int> score(students);         // 점수를 저장할 벡터

        for (int j = 0; j < students; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / students;

        for (int i = 0; i < students; i++) {
            if (avg < score[i]) {
                count++;
            }
        }
        cout << (count * 100) / double(students) << '%' << '\n';
    }

    return 0;
}