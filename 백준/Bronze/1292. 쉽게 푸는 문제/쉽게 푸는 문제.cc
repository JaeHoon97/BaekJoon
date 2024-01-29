#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<int> arr;
    int start, end, num = 1, sum = 0;

    cin >> start >> end;

    while (true) {
        for (int i = 0; i < num; i++) {
            arr.push_back(num);
        }
        num++;
        if (arr.size() >= 1000) {
            break;
        }
    }

    for (int i = start-1; i < end; i++) {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}