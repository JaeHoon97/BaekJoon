#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int k, num, sum = 0;

    cin >> k;

    vector<int> ledger(k);

    for (int i = 0; i < k; i++) {
        cin >> num;
        (num != 0) ? ledger.push_back(num) : ledger.pop_back();
    }
    for (int i = 0; i < ledger.size(); i++) {
        sum += ledger[i];
    }
    cout << sum << endl;

    return 0;
}