#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count, num;
    vector<int> v;

    cin >> count >> num;

    for (int i = 0; i < count; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    for (int i = 0; i < count; i++) {
        if(v[i] < num){
            cout << v[i] << " ";
        }
    }

    return 0;
}
