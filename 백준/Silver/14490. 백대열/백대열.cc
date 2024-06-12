#include <iostream>

using namespace std;

int gcd(int a, int b){
    int c;
    while(b){
        c = a%b;
        a=b;
        b=c;
    }
    return a;
}

int main()
{
    int n, m, d;
    scanf("%d : %d", &n, &m);

    d = gcd(n, m);
    n /= d;
    m /= d;
    cout<< n<<":"<<m;

    return 0;
}