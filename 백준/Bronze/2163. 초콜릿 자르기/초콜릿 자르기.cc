#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m; // n x m 사이즈의 초콜릿

    cin >> n >> m;

    cout << (n-1) + (m-1)*n << endl;


    return 0;
}