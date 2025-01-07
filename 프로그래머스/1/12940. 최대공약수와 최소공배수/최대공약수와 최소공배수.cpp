#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int c = a % b;
    while(c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


vector<int> solution(int n, int m) {
    vector<int> answer;

    int gcdVal = n > m ? gcd(n, m) : gcd(m, n);
    int lcmVal = n > m ? lcm(n, m) : lcm(m, n);

    answer.push_back(gcdVal);
    answer.push_back(lcmVal);

    return answer;
}