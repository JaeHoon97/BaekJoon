#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    set<int> cardSet;
    vector<int> result;
    int cardCount, checkCount;

    cin >> cardCount;

    for (int i = 0; i < cardCount; i++) {
        int num;
        cin >> num;
        cardSet.insert(num);
    }

    cin >> checkCount;

    for (int i = 0; i < checkCount; i++) {
        int num;
        cin >> num;
        if(cardSet.find(num) != cardSet.end()){
            result.push_back(1);
        } else {
            result.push_back(0);
        }
        cout << result[i] << " ";
    }

    return 0;
}