#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    cin >> n;

    vector<pair<int, int>> v(n);
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        int weight = v[i].first, height = v[i].second;
        for (int j = 0; j < n; j++) {
            if (weight < v[j].first && height < v[j].second) {
                count++;
            }
        }
        arr.push_back(count + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}