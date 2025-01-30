#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string word, first, second, third, result;
    set<string> s;
    int size;

    cin >> word;

    size = word.size();

    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            for (int k = 1; k < size; k++) {
                if (i + j + k == size) {
                    first = word.substr(0, i);
                    second = word.substr(i, j); 
                    third = word.substr(i + j, k);

                    reverse(first.begin(), first.end());
                    reverse(second.begin(), second.end());
                    reverse(third.begin(), third.end());

                    result = first + second + third;
                    s.insert(result);
                }
            }
        }
    }

    cout << *s.begin() << '\n';

    return 0;
}