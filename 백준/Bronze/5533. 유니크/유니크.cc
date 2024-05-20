#include <iostream>
using namespace std;
int ans[201];
int a[201][4];
 
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 1; k <= 3; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= n; j++)
            {
                if (a[i][k] == a[j][k] && i != j)
                {
                    cnt = 1;
                    break;
                }
            }
            if (!cnt)
                ans[i] += a[i][k];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << '\n';
    }
}
