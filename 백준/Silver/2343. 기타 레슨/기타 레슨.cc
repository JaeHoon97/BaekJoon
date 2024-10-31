// cd "/Users/jaehoon/Desktop/c++/" && g++ -std=c++17 *.cpp -o main && "/Users/jaehoon/Desktop/c++/"main
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int N, M, right = 0, left = 0;
    vector<int> v;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
        left = max(num, left);
        right += num;
    }

    while (left <= right) {
        int cnt = 0, sum = 0; 
        int mid = (left + right) / 2;

        for (int num : v) {
            if (sum + num <= mid) {
                sum += num;
            } else {
                cnt++;
                sum = num;
            }
        }

        if (sum != 0) {
            cnt++;
        }

        if (cnt <= M) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << left << '\n';

    return 0;
}