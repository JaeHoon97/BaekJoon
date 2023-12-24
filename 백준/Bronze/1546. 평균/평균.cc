#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);

    int n, max;      // 시험 본 과목의 개수 n, 최고 점수 max
    double sum = 0;  // 총 점수 sum
    vector<double> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        v.push_back(score);
    }

    max = *max_element(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        v[i] = v[i] / max * 100;
    }

    for (int i = 0; i < n; i++) {
        sum += v[i];
    }

    cout << sum / n << endl;

    return 0;
}
