#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int sum = 0;

    for(int i=0;i<5;i++){
        int score;
        cin >> score;
        sum += score;
    }

    cout << sum << endl;

    return 0;
}