#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int over, first, second, sum = 0;
    vector<int> dwarf(9);

    for (int i = 0; i < 9; i++) {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    over = sum - 100;

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (dwarf[i] + dwarf[j] == over) {
                first = i;
                second = j;
            }
        }
    }

    dwarf.erase(dwarf.begin() + second);
    dwarf.erase(dwarf.begin() + first);
    sort(dwarf.begin(), dwarf.end());

    for (int i = 0; i < 7; i++) {
        cout << dwarf[i] << '\n';
    }

    return 0;
}