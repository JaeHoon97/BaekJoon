#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int number, max;

    vector<int> set(9, 0);

    cin >> number;

    while (number != 0) {
        if(number % 10 == 9){
            set[6]++;    
        }
        set[number % 10]++;
        number /= 10;
    }
    (set[6] % 2 == 0) ? set[6] /= 2 : set[6] = set[6] / 2 + 1;

    max = *max_element(set.begin(), set.end());

    cout << max << endl;

    return 0;
}