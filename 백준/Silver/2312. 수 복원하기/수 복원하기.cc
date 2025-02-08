#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int testCase;
bool prime[100001];

void initPrime() {
    fill(prime, prime + 100001, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < 100001; i++) {
        if (!prime[i]) {
            continue;
        }
        for (int j = i * 2; j < 100001; j += i) {
            prime[j] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    initPrime();

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        map<int, int> m;
        int num, index = 2;

        cin >> num;

        while (num != 1) {
            if (prime[index] == true && num % index == 0) {
                num /= index;
                m[index]++;
            } else {
                index++;
            }
        }

        for (pair<int, int> p : m) {
            cout << p.first << ' ' << p.second << '\n';
        }
    }

    return 0;
}