#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int sizeOfA, sizeOfB, num;
    vector<int> result;

    cin >> sizeOfA >> sizeOfB;

    for (int i = 0; i < sizeOfA; i++) {
        cin >> num;
        result.push_back(num);
    }
    for (int i = 0; i < sizeOfB; i++) {
        cin >> num;
        result.push_back(num);
    }
    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}