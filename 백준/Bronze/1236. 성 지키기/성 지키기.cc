#include <iostream>
#include <string>
using namespace std;

string castle[50];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> castle[i];
	}
	int cnt1 = 0;
	for (int i = 0; i < N; i++) {
		bool noguard = 1;
		for (int j = 0; j < M; j++) {
			if (castle[i][j] == 'X') noguard = 0;
		}
		if (noguard) cnt1++;
	}

	int cnt2 = 0;
	for (int j = 0; j < M; j++) {
		bool noguard = 1;
		for (int i = 0; i < N; i++) {
			if (castle[i][j] == 'X') noguard = 0;
		}
		if (noguard) cnt2++;
	}

	cout << max(cnt1, cnt2);
}