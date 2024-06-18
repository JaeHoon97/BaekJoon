#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arr[10005];
int result;

void d(const int& n);
void print();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    for (int i = 1; i < 10000; i++) {
        d(i);
    }

    print();

    return 0;
}

void d(const int& n) {
    if (n >= 10000) {  // 종료 조건 설정
        return;
    }
    int sum = 0;
    string str = to_string(n);  // 정수를 문자열로 바꾼다.

    sum += n;  // 우선 자기 자신을 더한다.

    for (int i = 0; i < str.length(); i++) {
        sum += (str[i] - '0');  // 인덱스에 해당하는 문자를 정수로 변환하고 더해준다.
    }

    if(sum<=10000) {
        arr[sum] = 1;  // sum은 생성자가 존재한다.
    }
    
    d(sum);        // 최종 합을 다시 호출하여 반복한다.
}

void print() {
    for (int i = 1; i < 10000; i++) {
        if (arr[i] == 0) {
            cout << i << endl;
        }
    }
}
