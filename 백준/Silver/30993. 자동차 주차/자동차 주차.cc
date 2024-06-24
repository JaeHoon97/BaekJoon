#include <iostream>
using namespace std;
using ll = long long;
int N, A, B, C;
ll calc(int &num)
{
    ll sum = 1;
    while (num)
    {
        sum *= num;
        --num;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N >> A >> B >> C;
    cout << (calc(N) / (calc(A) * calc(B) * calc(C)));
    return 0;
}