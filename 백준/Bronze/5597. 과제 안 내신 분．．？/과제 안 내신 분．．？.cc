#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    vector<int> total(30, 0);
    vector<int> omit;

    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;
        total[num - 1] = 1;
    }

    for (int i = 0; i < 30; i++) {
        if (total[i] == 0) {
            omit.push_back(i);
        }
    }

    for (int i = 0; i < omit.size(); i++) {
        cout << omit[i] + 1 << endl;
    }

    return 0;
}
