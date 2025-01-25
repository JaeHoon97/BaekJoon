#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string fibo[10005];
int n;

string sum(string first, string second) {
    string result;
    int carry = 0, size, diff = first.size() - second.size();

    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());

    size = (diff > 0) ? (first.size() - second.size()) : (second.size() - first.size());
    (diff > 0) ? second.append(size, '0') : first.append(size, '0');

    for (int i = 0; i < first.size(); i++) {
        int num = (first[i] - '0') + (second[i] - '0') + carry;
        result += to_string(num % 10);
        carry = num / 10;
    }

    if (carry == 1) {
        result += '1';
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n;

    fibo[0] = "0";
    fibo[1] = "1";

    for (int i = 2; i <= n; i++) {
        fibo[i] = sum(fibo[i - 1], fibo[i - 2]);
    }

    cout << fibo[n] << '\n';

    return 0;
}