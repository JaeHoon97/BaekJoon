#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int people, area, news;

    cin >> people >> area;

    for (int i = 0; i < 5; i++) {
        cin >> news;
        cout << news - (people * area) << endl;
    }

    return 0;
}