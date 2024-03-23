#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    map<long long, long long> movie;
    long long N, count = 1, value = 666;
    string str;

    cin >> N;

    while (true) {
        if (count > N) {
            break;
        }

        str = to_string(value);

        if (str.find("666") != string::npos) {
            movie.insert({count, value});
            count++;
        }
        value++;
    }


    cout << movie[N] << '\n';

    return 0;
}