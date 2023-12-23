#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v;
    int count, num, key, same = 0;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> num;
        v.push_back(num);
    }

    cin >> key;

    for (int i = 0; i < count; i++) {
        if (key == v[i]) {
            same += 1;
        }
    }

    cout << same << "\n";
    
    return 0;
}
