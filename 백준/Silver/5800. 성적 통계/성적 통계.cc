#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int k, n, value;

    cin >> k;

    for (int i = 1; i <= k; i++) {
        cin >> n;
        vector<int> score;
        for (int j = 0; j < n; j++) {
            cin >> value;
            score.push_back(value);
        }
        int max, min, gap=-1;
        max = *max_element(score.begin(), score.end());
        min = *min_element(score.begin(), score.end());

        sort(score.begin(), score.end(), greater<int>());

        for (int l = 0; l < n - 1; l++) {
            if (score[l] - score[l + 1] > gap) {
                gap = score[l] - score[l + 1];
            }
        }
        cout << "Class " << i << '\n';
        cout << "Max " << max << ", Min " << min << ", Largest gap " << gap << '\n'; 
    }

    return 0;
}