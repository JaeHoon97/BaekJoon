#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x[1001] = {0}, y[1001] = {0};
    int n, m;
    for (int i = 0; i < 3; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        x[num1]++, y[num2]++;
    }

    for (int i = 0; i < 1001; i++) {
        if(x[i]==1){
            n = i;
        }
        if(y[i] == 1){
            m = i;
        }
    }

    cout << n << " " << m << '\n';

    return 0;
}
