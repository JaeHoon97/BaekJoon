#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    int c = a % b;

    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}

int solution(int a, int b) {
    int answer = 1;


    int _gcd = a > b ? GCD(a, b) : GCD(b, a);

    b /= _gcd;

    if (b == 1) {
        return 1;
    }

    while(b % 2 == 0) { b /= 2; }
    while(b % 5 == 0) { b /= 5; }

    return b != 1 ? 2 : 1;

}