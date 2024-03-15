#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int N, K, num;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    
    cout << v[K-1] << endl;

    return 0;
}