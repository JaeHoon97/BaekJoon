#include <iostream>
using namespace std;
int main() {
    int num, T, cnt = 0, ncnt = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> num;
        if (num == 0)
            ncnt++;
        else
            cnt++;
    }
    if (ncnt > cnt)
    {
        cout << "Junhee is not cute!";
    }
    else
        cout << "Junhee is cute!";
}