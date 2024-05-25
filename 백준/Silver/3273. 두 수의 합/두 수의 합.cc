#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, x, result;
int arr[1000005];  // 수열의 원소 값
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[num] = 1;
        v.push_back(num);
    }

    cin >> x;

    for (auto num : v) {
        if ((1 <= x - num) && (x - num <= 1000000)) {
            if (arr[num] && arr[x - num]) {
                result++;
            }
        }
    }

    cout << result / 2 << '\n';

    return 0;
}