#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    while (true) {
        int num, sum = 0;
        vector<int> v;

        cin >> num;

        if (num == -1) {  // 입력받은 수가 -1이면 종료
            break;
        }

        for (int i = 1; i < num; i++) {  // 1부터 num 이전까지
            if (num % i == 0) {          // i가 num의 약수일 경우
                sum += i;
                v.push_back(i);
            }
        }

        if (num == sum) {
            cout << num << " = ";
            for (int i = 0; i < v.size(); i++) {
                if (i == (v.size() - 1)) {
                    cout << v[i] << endl;
                } else {
                    cout << v[i] << " + ";
                }
            }
        } else {
            cout << num << " is NOT perfect." << endl;
        }
    }

    return 0;
}
