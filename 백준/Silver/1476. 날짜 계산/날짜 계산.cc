#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int E, S, M, earth, sun, moon, year;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> E >> S >> M;

    while(true) {
        earth++, sun++, moon++ ,year++;
        
        if(earth>=16) { earth = 1; }

        if(sun>=29) { sun = 1; }

        if(moon>=20) { moon = 1; }

        if(earth == E && sun == S && moon == M) {
            break;
        }
    }

    cout << year << '\n';

    return 0;
}
