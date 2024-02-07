#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>
#include <queue>

using namespace std;

bool compare(const pair<int, int>& left, const pair<int, int>& right) {
    if (left.first > right.first) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    vector<pair<int, int>> score;
    priority_queue<int, vector<int>, greater<>> order;
    int totalScore = 0;

    for (int i = 1; i <= 8; i++) {
        int point;
        cin >> point;
        score.push_back({point, i});
    }

    sort(score.begin(), score.end(), compare);

    for (int i = 0; i < 5; i++) {
        totalScore += score[i].first;
        order.push(score[i].second);
    }

    cout << totalScore << endl;

    for(int i=0;i<5;i++){
        cout << order.top() << " ";
        order.pop();
    }

    return 0;
}