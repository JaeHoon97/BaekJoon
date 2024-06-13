#include <iostream>
using namespace std;
int x1, x2, a, b, c, d, e;
int calc(int x) // 적분
{
    return a * (x * x * x) / 3 + (b - d) * (x * x) / 2 + (c - e) * x;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> x1 >> x2 >> a >> b >> c >> d >> e;
    cout << (calc(x2) - calc(x1));
    return 0;
}