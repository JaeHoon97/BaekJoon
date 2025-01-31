#include <algorithm>
#include <iostream>

using namespace std;

int N, jimin, hansu, cnt = 1;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> N >> jimin >> hansu;

    while (true) {
        if ((jimin + 1 == hansu) && (jimin % 2 != 0 && hansu % 2 == 0)) {
            break;
        }
        if (hansu + 1 == jimin && (hansu % 2 != 0 && jimin % 2 == 0)) {
            break;
        }

        cnt++;
        (jimin % 2 == 0) ? jimin /= 2 : jimin = jimin / 2 + 1;
        (hansu % 2 == 0) ? hansu /= 2 : hansu = hansu / 2 + 1;
    }

    cout << cnt << '\n';

    return 0;
}