#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int x, y;

    while(true){
        cin >> x >> y;
        if(x == 0 && y ==0){
            break;
        }
        else {
            (x>y) ? cout << "Yes" << endl : cout << "No" << endl;
        }
    }

    return 0;
}
