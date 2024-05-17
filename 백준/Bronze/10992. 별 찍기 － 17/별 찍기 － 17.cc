#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++) { //4를 입력해줬을때 3번째 줄까지만 출력
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < 2 * (i - 1) - 1; k++) {
            cout << " ";
        }
        if (i > 1) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2 * n - 1; i++) {
        cout << "*";
    }
    return 0;
}