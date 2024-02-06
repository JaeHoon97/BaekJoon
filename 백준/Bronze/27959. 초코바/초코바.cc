#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    if(n*100>=m){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}