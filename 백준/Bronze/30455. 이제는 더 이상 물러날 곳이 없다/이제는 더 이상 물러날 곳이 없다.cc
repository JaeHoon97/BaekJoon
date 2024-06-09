#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    cin >> N;
    if (N % 2 == 1) cout << "Goose";
    else cout << "Duck";
}