#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long n, m;

    cin >> n >> m;

    m >= n ? cout << m - n << endl :cout << n - m << endl ;  
    

    return 0;
}