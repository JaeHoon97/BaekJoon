#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, result;
char d;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> d;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);

        for(auto c : str) {
            if(c == d) {
                result++;
            }
        }

    }

    cout << result << '\n';

    return 0;
}
