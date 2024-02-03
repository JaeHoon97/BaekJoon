#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int fruitCount, fruitLength, snakeBirdLength;
    priority_queue<int, vector<int>, greater<>> fruitArr;

    cin >> fruitCount >> snakeBirdLength;

    for (int i = 0; i < fruitCount; i++) {
        cin >> fruitLength;
        fruitArr.push(fruitLength);
    }

    while (fruitArr.top() <= snakeBirdLength) {
        snakeBirdLength++;
        fruitArr.pop();
        if (fruitArr.size() == 0) {
            break;
        }
    }

    cout << snakeBirdLength << endl;

    return 0;
}