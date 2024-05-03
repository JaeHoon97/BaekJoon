#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
int arr[55][55];
vector<pair<int, int>> chickenPoint, housePoint;
vector<int> selected, result;

void makeSelect();
int calculateDistance();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                chickenPoint.push_back({i, j});
            }
            if (arr[i][j] == 1) {
                housePoint.push_back({i, j});
            }
        }
    }

    makeSelect();

    do {
        result.push_back(calculateDistance());
    } while (next_permutation(selected.begin(), selected.end()));

    cout << *min_element(result.begin(), result.end()) << '\n';

    return 0;
}

void makeSelect() {
    for (int i = 0; i < chickenPoint.size() - M; i++) {
        selected.push_back(0);
    }

    for (int i = 0; i < M; i++) {
        selected.push_back(1);
    }
}

int calculateDistance() {
    int result = 0;
    for (int i = 0; i < housePoint.size(); i++) {
        int distance = 1000;
        for (int j = 0; j < selected.size(); j++) {
            if (selected[j] == 1) {
                int x = abs(chickenPoint[j].first - housePoint[i].first);
                int y = abs(chickenPoint[j].second - housePoint[i].second);
                if (distance > x + y) {
                    distance = x + y;
                }
            }
        }
        result += distance;
    }
    return result;
}
