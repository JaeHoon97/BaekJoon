#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    	int t; cin >> t;
	int n, k, temp, cnt;

	for (int i = 0; i < t; ++i) {
		cin >> n >> k;
		cnt = 0;
		for (int j = 0; j < n; ++j) {
			cin >> temp;
			while (temp >= k) {
				cnt++;
				temp -= k;
			}
		}
		cout << cnt << "\n";
	}

    return 0;
}
