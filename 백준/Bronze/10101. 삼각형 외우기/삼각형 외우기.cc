#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c && c == 60) {  // 세 각의 크기가 모두 60으로 같을 때
        cout << "Equilateral" << '\n';
    } else if (a + b + c == 180) {         // 세 각의 크기의 합이 180일 때
        if (a != b && b != c && a != c) {  // 세각의 크기의 합이 180이면서, 세 각이 모두 다를 때
            cout << "Scalene" << '\n';
        } else {  // 세각의 크기의 합이 180이면서, 두 각이 같을 때 (세 각의 크기가 같을 경우는 이미 첫번쨰 if에서 걸러짐)
            cout << "Isosceles" << '\n';
        }
    } else {  // 세 각의 합이 180이 아닐 때
        cout << "Error" << '\n';
    }

    return 0;
}
